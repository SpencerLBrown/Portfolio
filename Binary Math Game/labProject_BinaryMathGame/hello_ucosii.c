/*************************************************************************
* Copyright (c) 2004 Altera Corporation, San Jose, California, USA.      *
* All rights reserved. All use of this software and documentation is     *
* subject to the License Agreement located at the end of this file below.*
**************************************************************************
* Description:                                                           *
* The following is a simple hello world program running MicroC/OS-II.The * 
* purpose of the design is to be a very simple application that just     *
* demonstrates MicroC/OS-II running on NIOS II.The design doesn't account*
* for issues such as checking system call return codes. etc.             *
*                                                                        *
* Requirements:                                                          *
*   -Supported Example Hardware Platforms                                *
*     Standard                                                           *
*     Full Featured                                                      *
*     Low Cost                                                           *
*   -Supported Development Boards                                        *
*     Nios II Development Board, Stratix II Edition                      *
*     Nios Development Board, Stratix Professional Edition               *
*     Nios Development Board, Stratix Edition                            *
*     Nios Development Board, Cyclone Edition                            *
*   -System Library Settings                                             *
*     RTOS Type - MicroC/OS-II                                           *
*     Periodic System Timer                                              *
*   -Know Issues                                                         *
*     If this design is run on the ISS, terminal output will take several*
*     minutes per iteration.                                             *
**************************************************************************/

#include <stdio.h>
#include "includes.h"
#include "de2_sw.h"
#include "de2_keys.h"
#include "de2_led.h"
#include "de2_lcd.h"
#include "de2_vga.h"
#include "de2_spencerAnimations.h"
#include "de2_seven_segment_hex.h"
#include <stdlib.h>


/* Definitions of General Tasks */
void TaskStartup(void*);
void TaskScanKey(void*);
void TaskScanSwitch(void*);
void TaskSubmit(void*);
void TaskUpdateQuestion(void*);
void TaskUpdateTimer(void*);

/* Definitions of On-Board Display Tasks */
void TaskDisplayResultLCD(void*);
void TaskDisplayTimer(void*);
void TaskDisplayLevel(void*);
void TaskUpdateQuestionPosedLCD(void*);
void TaskUpdateQuestionNumberLCD(void*);
void TaskDisplayEndOfLevelLCD(void*);

/* Definitions of VGA Display Tasks */
// Spencer additions start here!
void TaskDisplayResultVGA(void*);
void TaskDisplayTimerVGA(void*);
void TaskDisplayLevelVGA(void*) ;
void TaskUpdateQuestionPosedVGA(void*);
void TaskUpdateQuestionNumberVGA(void*);
void TaskDrawAnimationsVGA(void*);
void TaskDisplayEndOfLevelVGA(void*);
// Spencer additions end here!

/* Definition of General Task Stacks */
#define   TASK_STACKSIZE       2048
OS_STK    TaskStartup_stk[TASK_STACKSIZE];
OS_STK    TaskScanKey_stk[TASK_STACKSIZE];
OS_STK    TaskScanSwitch_stk[TASK_STACKSIZE];
OS_STK    TaskSubmit_stk[TASK_STACKSIZE];
OS_STK    TaskUpdateQuestion_stk[TASK_STACKSIZE];
OS_STK    TaskUpdateTimer_stk[TASK_STACKSIZE];

/* Definition of On-board Display Stacks */
OS_STK    TaskDisplayTimer_stk[TASK_STACKSIZE];
OS_STK    TaskDisplayLevel_stk[TASK_STACKSIZE];
OS_STK    TaskUpdateQuestionPosedLCD_stk[TASK_STACKSIZE];
OS_STK    TaskUpdateQuestionNumberLCD_stk[TASK_STACKSIZE];
OS_STK    TaskDisplayResultLCD_stk[TASK_STACKSIZE];
OS_STK    TaskDisplayEndOfLevelLCD_stk[TASK_STACKSIZE];

/* Definition of VGA Display Stacks */
// Spencer additions start here!
OS_STK	  TaskDisplayTimerVGA_stk[TASK_STACKSIZE];
OS_STK	  TaskDisplayLevelVGA_stk[TASK_STACKSIZE];
OS_STK	  TaskUpdateQuestionPosedVGA_stk[TASK_STACKSIZE];
OS_STK	  TaskUpdateQuestionNumberVGA_stk[TASK_STACKSIZE];
OS_STK	  TaskDisplayResultVGA_stk[TASK_STACKSIZE];
OS_STK	  TaskDrawAnimationsVGA_stk[TASK_STACKSIZE];
OS_STK    TaskDisplayEndOfLevelVGA_stk[TASK_STACKSIZE];
// Spencer additions end here!


/* Definition of General Task Priorities */
#define BIGGEST_TASK_PRIO 13
#define NON_GENERAL_TASK_PRIOS_START_HERE 5
#define TaskStartupPrio     1
#define TaskScanSwitchPrio  2
#define TaskScanKeyPrio     3
#define TaskSubmitPrio      4
#define TaskDisplayResultLCDPrio      5
#define TaskDisplayEndOfLevelLCDPrio  6
#define TaskUpdateQuestionPrio        7
#define TaskUpdateTimerPrio           8
#define TaskDisplayTimerPrio          9
#define TaskDisplayLevelPrio          10
#define TaskUpdateQuestionPosedLCDPrio     11
#define TaskUpdateQuestionNumberLCDPrio    12
// Spencer additions start here!
#define TaskDisplayResultVGAPrio	  5
#define TaskDisplayEndOfLevelVGAPrio  6
#define TaskDisplayTimerVGAPrio		  9
#define TaskDisplayLevelVGAPrio		  10
#define TaskUpdateQuestionPosedVGAPrio		11
#define TaskUpdateQuestionNumberVGAPrio		12
#define TaskDrawAnimationsVGAPrio BIGGEST_TASK_PRIO
// Spencer additions end here!

/* Mailboxes */
OS_EVENT* QuestionPosedMbox; // start value=((void*)0)
OS_EVENT* QuestionNumberMbox; // start value=((void*)0)

/* Semaphores */
OS_EVENT* KeyPress1Sem; // start value=0, for going forward 1 level
OS_EVENT* KeyPress2Sem; // start value=0, for going back 1 level
OS_EVENT* KeyPress3Sem; // start value=0, for submitting tasks
OS_EVENT* SwitchValueSem; // start value=1
OS_EVENT* DisplayResultSem; // start value=0
OS_EVENT* UpdateQuestionSem; // start value=1
OS_EVENT* LevelDisplaySem; // start value=0
OS_EVENT* HEXDisplaySem; // start value=1
OS_EVENT* VGADisplaySem; // start value=1
OS_EVENT* LCDDisplaySem; // start value=1

/* Flags */
OS_FLAG_GRP* LevelGoFlags; // determine where to go when a "level advance" or "level behind" button is pressed.
OS_FLAG_GRP* ProgramStateFlags; // determine which program state we are in (HEX MODE!!!, normal, etc...?);
OS_FLAG_GRP* ResetStateFlags; // flag that holds its values in spite of system reset
OS_FLAG_GRP* VGAAnimationCuesFlags; // determine what animations should run and when

/* Level_t Definitions */
#define LEVEL_ALLOW_ADDITION 0x01
#define LEVEL_ALLOW_SUBTRACTION 0x02
#define LEVEL_ALLOW_INT_DIVISION 0x04
#define LEVEL_ALLOW_MULTIPLICATION 0x08

/* Level-specific Definitions */
#define MAX_NUMBER_OF_LEVELS 6 // Subject to change
#define MIN_NUMBER_OVERALL 1
#define MAX_NUMBER_OVERALL 262143
#define MAX_NUMBER_MULTIPLICATION 720

/* Timing Cues Definitions */
#define TIME_TO_DISPLAY_RESULT 5 // Number of seconds to display whether answer was correct or incorrect
#define TIME_TO_DISPLAY_LEVEL_END 10 // Number of seconds to display end of level info
#define TIME_TO_DISPLAY_END_OF_GAME 99 // Number of seconds to display end of game info (once player has beaten Level 5)
#define TIME_TO_BE_WORRIED 9 // Number of seconds before animations switch to being worried

/* Other Definitions */
#define MAX_HEX_NUMBER_REPRESENTABLE_BY_INPUT 0x3FFFF // 2^18-1
#define MAX_NUMBER_OF_LEVELS 6 // Subject to change
#define MIN_NUMBER_OVERALL 1 // Min value for Level_t.minNumber
#define MAX_NUMBER_OVERALL 262143 // Max value for Level_t.maxNumber
#define MAX_NUMBER_MULTIPLICATION 720 // Max value for Level_t.maxNumberMult
#define NUM_QUESTIONS_PER_LEVEL 8
#define MIN_PERCENTAGE_CORRECT_FOR_PROMOTION 50.0
#define EASTER_EGG_VALUE 42 // Value of switches [16:0] on startup to enter HEX MODE!!!
#define LEVEL_ON_WIN 1 // Level to go back to if the game is won

/* LevelGoFlags Definitions */
#define LEVEL_GO_FORWARD 0x01 // If this is set in LevelGoFlags, updateLevel advances the level; else, we go back one level

/* ProgramStateFlags Definitions */
#define PROGRAM_STATE_VGA_MODE_SET 0x01 // If this is set in ProgramStateFlags, program is operation in VGA flavour
#define PROGRAM_STATE_HEX_MODE_SET 0x02 // If this is set in ProgramStateFlags, program is in HEX MODE!!! and delivers questions in HEX instead of DEC
#define PROGRAM_STATE_DISPLAY_RESULT 0x04 // If this is set in ProgramStateFlags, next timeout will display the result; if clear, next timeout generates new question
#define PROGRAM_STATE_END_LEVEL 0x08 // If this is set in ProgramStateFlags, next timeout will display the result; if clear, next timeout generates new question

/* ResetStateFlags Definitions */
#define RESET_STATE_TASK_SCAN_KEY_EXISTS 0x01 // If this is set, TaskScanKey() is not created in createGeneralTasks()

/* VGAAnimationCuesFlags */
#define VGA_ANIMATION_CUES_WORRIED 0x01
#define VGA_ANIMATION_CUES_WIN 0x02
#define VGA_ANIMATION_CUES_LOSE 0x04

/* Structs */
/**
 * Level_t struct:
 * A structure containing data information for a level.
 */
typedef struct {
    int levelNumber; // The level of the number
    int minNumber; // Smallest number potentially used in question
    int maxNumber; // Largest number potentially used in questions for all operations but multiplication
    int maxNumberMult; // Largest number potentially used for multiplication questions
    int allowedOperations; // Set of LEVEL_ALLOW macros
    int timePerQuestion;
} Level_t;

/* Array of Levels */
Level_t Levels[MAX_NUMBER_OF_LEVELS];

/* Current Level */
Level_t CurrentLevel;

/* Int Globals */
int SwitchValue; // current value of SW[17:0]
int TimeRemaining; // taken from Level_t timePerQuestion member
int OnQuestionNum = 0; // displays what question in the level we are on (start at 0, incremented to 1 by TaskUpdateQuestion on game start)
int QuestionsCorrect = 0; // number of questions correctly answered during level
int AnimationState = 1; // current animation cycle
int CurrentCorrectAnswer; // current correct answer for the question
int CurrentLevelNumber; // taken from Level_t levelNumber

/* Static and Non-Task Functions */
/**
 * Fills the Levels array with Levels with differing instance variables depending on assumed
 * difficulties of levels.
 * Pre: Nothing
 * Post: Levels contains Level_t with fields populated with information
 * Return: Nothing
 * Timing Constraints: None; this function should be run before task creation.
 */
static void populateLevels(void) {
    int i; // for for loop
    for (i=0; i<MAX_NUMBER_OF_LEVELS; i++) {
        Levels[i].levelNumber = i; // Populate levelNumber
        // Populate minNumber...
        Levels[i].minNumber = 1 + (i << i/2)/3;
        // Ensure minNumber > 1
        if (Levels[i].minNumber < MIN_NUMBER_OVERALL) Levels[i].minNumber = MIN_NUMBER_OVERALL;
        // Populate maxNumber...
        Levels[i].maxNumber = 20 + (i << i*2) + (i << i/2)/3;
        // Ensure maxNumber < 2^17+2^16+... (reserve SW17 for 1s complement)
        if (Levels[i].maxNumber > MAX_NUMBER_OVERALL) Levels[i].maxNumber = MAX_NUMBER_OVERALL;
        // Populate maxNumberMult...
        Levels[i].maxNumberMult = 5 + (1 << i*2)/3;
        // Ensure maxNumberMult is within some sort of reason
        if (Levels[i].maxNumberMult > MAX_NUMBER_MULTIPLICATION) Levels[i].maxNumberMult = MAX_NUMBER_MULTIPLICATION;
    }
    // Other, hard-coded vals...
    // Time per question
    Levels[0].timePerQuestion = 99;
    Levels[1].timePerQuestion = 60;
    Levels[2].timePerQuestion = 60;
    Levels[3].timePerQuestion = 30;
    Levels[4].timePerQuestion = 30;
    Levels[5].timePerQuestion = 20;
    // Operation Allowances
    Levels[0].allowedOperations = LEVEL_ALLOW_ADDITION;
    Levels[1].allowedOperations = LEVEL_ALLOW_ADDITION;
    Levels[2].allowedOperations = LEVEL_ALLOW_ADDITION+LEVEL_ALLOW_SUBTRACTION;
    Levels[3].allowedOperations = LEVEL_ALLOW_ADDITION+LEVEL_ALLOW_SUBTRACTION+LEVEL_ALLOW_INT_DIVISION;
    Levels[4].allowedOperations = LEVEL_ALLOW_ADDITION+LEVEL_ALLOW_SUBTRACTION+LEVEL_ALLOW_INT_DIVISION+LEVEL_ALLOW_MULTIPLICATION;
    Levels[5].allowedOperations = LEVEL_ALLOW_ADDITION+LEVEL_ALLOW_SUBTRACTION+LEVEL_ALLOW_INT_DIVISION+LEVEL_ALLOW_MULTIPLICATION;
}

/**
 * Gets a number in range of a level
 * Pre: level = level_t to get random value in range of its min and max instance variables
 * Post: Nothing
 * Return: random number between level.minNumber and level.maxNumber, inclusive
 * Timing Constraints: This task should be (in practice) approximately 1 atomic operations.
 * @50Mhz clock, this is 20ns.
 */
unsigned long getNumber(Level_t level) {
    return level.minNumber + rand()%(level.maxNumber-level.minNumber);
}

/**
 * Gets a number in range of a level for the multiplication operation.
 * Pre: level = level_t to get random value in range of its min and maxNumberMult instance variables
 * Post: Nothing
 * Return: random number between level.minNumber and level.maxNumberMult, inclusive
 * Timing Constraints: This task should be (in practice) approximately 1 atomic operations.
 * @50Mhz clock, this is 20ns.
 */
unsigned long getNumberMult(Level_t level) {
    return level.minNumber + rand()%(level.maxNumberMult-level.minNumber);
}

/**
 * Gets a random operation for a level
 * Pre: leveProgramStateFlags = level_t to get random valid operation based on its
 * allowOperations instance variable.
 * Post: Nothing
 * Return: value between 0 and 3, where 0 is addition, 1 is subraction, 2 is division, and 3 is
 * multiplication
 * Timing Constraints: This task should be (in practice) no worse than 6 atomic operations.
 * @50Mhz clock, this is 120ns.
 */
unsigned short getOperation(Level_t level) {
    int loopCounter = 4;
    unsigned short operation = rand()%4;
    while (loopCounter) { // Loop should run for max of 4 times
        //printf("%d\n", operation);
        if (level.allowedOperations&(1 << operation)) return operation;
        operation--;
        loopCounter--;
    }
    return 0;
}

/**
 * Gets the appropriate character dependent on values 0 through 3
 * Pre: op = unsigned value representing a mathematical operationPost: Nothing
 * Return: char representation of numerical op
 * Timing Constraints: This task should be (in practice) no worse than 5 atomic operations.
 * @50Mhz clock, this is 100ns.
 */
unsigned char getOperationSymbol(unsigned short operation) {
    if (0 == operation) return '+';
    else if (1 == operation) return '-';
    else if (2 == operation) return '/';
    else return '*';
}

/**
 * Gets the answer to a NUMBER OPERATION NUMBER problem
 * Pre: num1 = int number
 * num2 = int number
 * op = operation to perform between num1 and num2 (valid range: 0 through 3)
 * Post: Nothing
 * Return: num1 OP num2
 * Timing Constraints: This task should be (in practice) no worse than 5 atomic operations.
 * @50Mhz clock, this is 100ns.
 */
int getAns (int n1, char op, int n2) {
    switch (op) {
        case 0:
            return n1 + n2;
        case 1:
            return (unsigned)((n1 - n2)&MAX_HEX_NUMBER_REPRESENTABLE_BY_INPUT);
        case 2:
            return n1 / n2;
        default:
            return n1 * n2;
    }
}

/**
 * Returns an int-cast boolean regarding whether the program is operating in VGA mode.
 * Pre: Nothing
 * Post: Nothing
 * Return: >0 if in VGA mode, 0 else.
 */
int inVGAMode(void) {
	INT8U err;
	return PROGRAM_STATE_VGA_MODE_SET&OSFlagQuery(ProgramStateFlags, &err);

}

/**
 * Returns an int-cast boolean regarding whether the program is operating in VGA mode.
 * Pre: Nothing
 * Post: Nothing
 * Return: >0 if in VGA mode, 0 else.
 */
int inHexMode(void) {
	INT8U err;
	return PROGRAM_STATE_HEX_MODE_SET&OSFlagQuery(ProgramStateFlags, &err);
}

/**
 * Prepares the system so the next timeout generates a new question.
 * Pre: Nothing
 * Post: The system will generate and then display a new question when
 * TimeRemaining reaches 0.
 * Return: Nothing
 */
void getReadyNewQuestion(void) {
	INT8U err;
	OSFlagPost(ProgramStateFlags, PROGRAM_STATE_DISPLAY_RESULT, OS_FLAG_CLR, &err);
}

/**
 * Prepares the system so the next timeout generates a new question.
 * Pre: Nothing
 * Post: The system will generate and then display a new question when
 * TimeRemaining reaches 0.
 * Return: Nothing
 */
void getReadyDisplayResult(void) {
	INT8U err;
	OSFlagPost(ProgramStateFlags, PROGRAM_STATE_DISPLAY_RESULT, OS_FLAG_SET, &err);
}

/**
 * Prepares the system so the next timeout shows end of level stats.
 * Pre: Nothing
 * Post: The system will generate and then display end of level stats when
 * TimeRemaining reaches 0.
 * Return: Nothing
 */
void getReadyEndOfLevel(void) {
	INT8U err;
	OSFlagPost(ProgramStateFlags, PROGRAM_STATE_END_LEVEL, OS_FLAG_SET, &err);
}


/**
 * Gets the program ready to go forward a level.
 * Pre: Nothing
 * Post: Sets LEVEL_GO_FORWARD in LevelGoFlags.
 * Return: Nothing
 */
void getReadyGoForwardLevel(void) {
	INT8U err;
	OSFlagPost(LevelGoFlags, LEVEL_GO_FORWARD, OS_FLAG_SET, &err);
}

/**
 * Gets the program ready to go back a level.
 * Pre: Nothing
 * Post: Clears LEVEL_GO_FORWARD in LevelGoFlags.
 * Return: Nothing
 */
void getReadyGoBackwardLevel(void) {
	INT8U err;
	OSFlagPost(LevelGoFlags, LEVEL_GO_FORWARD, OS_FLAG_CLR, &err);
}


/**
 * Sets the LEDG pointer to 0 (clears it), among any other "level reset" tasks.
 * Pre: Nothing
 * Post: No LEDGs are onReturn: Nothing
 * Timing Constraints: This task should be (in practice) approximately 4 atomic operations.
 * @50MHz clock, this is 80ns.
 */
void clearLevel(void) {
	INT8U err;
	set_ledg(0);
	OSFlagPost(LevelGoFlags, LEVEL_GO_FORWARD, OS_FLAG_CLR, &err);
	QuestionsCorrect = 0;
	OnQuestionNum = 0; // displays what question in the level we are on (start at 0, incremented to 1 by TaskUpdateQuestion on game start)
	CurrentLevelNumber = CurrentLevel.levelNumber;
	// Remove flag for end of level state.
	OSFlagPost(ProgramStateFlags, PROGRAM_STATE_END_LEVEL, OS_FLAG_CLR, &err);
}

/**
 * Sets CurrentLevel to be the next level (via the Levels array)
 * if LevelGoFlags value is 0; else, it takes into account the value of LevelGoFlags to change
 * CurrentLevel before clearing LevelGoFlags. The task updates globals accordingly, and runs
 * clearLevel().
 * Pre: Nothing
 * Post: CurrentLevel is changed
 * Return: Nothing
 * Timing Constraints: This task should be (in practice) should be 2 atomic operations +
 * clearLevel(). @50MHz, this is approximately 120ns.
 */
void updateLevel(void) {
	INT8U err;
	// Going forward a level?
	if (LEVEL_GO_FORWARD&OSFlagQuery(LevelGoFlags, &err)) {
		if (CurrentLevelNumber < MAX_NUMBER_OF_LEVELS-1) CurrentLevelNumber++; // MAX_NUMBER_OF_LEVELS-1 because levels start at 0
		// Reset game.
		else CurrentLevelNumber = LEVEL_ON_WIN;
	} else {
		if (CurrentLevelNumber) CurrentLevelNumber--;
	}
	CurrentLevel = Levels[CurrentLevelNumber];
	clearLevel();
}

/**
 * Creates GENERAL TASKS.
 * Pre: Nothing
 * Post: Tasks under GENERAL TASKS are created
 * Return: Nothing
 */
static void createGeneralTasks(void) {
	INT8U err;
	int value = OSFlagQuery(ResetStateFlags, &err);
	if (!(value&RESET_STATE_TASK_SCAN_KEY_EXISTS)) {
		OSTaskCreateExt(TaskScanKey,
				NULL,
				(void *)&TaskScanKey_stk[TASK_STACKSIZE-1],
				TaskScanKeyPrio,
				TaskScanKeyPrio,
				TaskScanKey_stk,
				TASK_STACKSIZE,
				NULL,
				0);
		OSFlagPost(ResetStateFlags, RESET_STATE_TASK_SCAN_KEY_EXISTS, OS_FLAG_SET, &err);
	}

	OSTaskCreateExt(TaskScanSwitch,
			NULL,
			(void *)&TaskScanSwitch_stk[TASK_STACKSIZE-1],
			TaskScanSwitchPrio,
			TaskScanSwitchPrio,
			TaskScanSwitch_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskSubmit,
			NULL,
			(void *)&TaskSubmit_stk[TASK_STACKSIZE-1],
			TaskSubmitPrio,
			TaskSubmitPrio,
			TaskSubmit_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskUpdateQuestion,
			NULL,
			(void *)&TaskUpdateQuestion_stk[TASK_STACKSIZE-1],
			TaskUpdateQuestionPrio,
			TaskUpdateQuestionPrio,
			TaskUpdateQuestion_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskUpdateTimer,
			NULL,
			(void *)&TaskUpdateTimer_stk[TASK_STACKSIZE-1],
			TaskUpdateTimerPrio,
			TaskUpdateTimerPrio,
			TaskUpdateTimer_stk,
			TASK_STACKSIZE,
			NULL,
			0);
}

/**
 * Creates ON-BOARD DISPLAY TASKS.
 * Pre: Nothing
 * Post: Tasks under ON-BOARD DISPLAY TASKS are created
 * Return: Nothing
 */
static void createOnBoardTasks(void) {
	OSTaskCreateExt(TaskDisplayResultLCD,
			NULL,
			(void *)&TaskDisplayResultLCD_stk[TASK_STACKSIZE-1],
			TaskDisplayResultLCDPrio,
			TaskDisplayResultLCDPrio,
			TaskDisplayResultLCD_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskDisplayEndOfLevelLCD,
			NULL,
			(void *)&TaskDisplayEndOfLevelLCD_stk[TASK_STACKSIZE-1],
			TaskDisplayEndOfLevelLCDPrio,
			TaskDisplayEndOfLevelLCDPrio,
			TaskDisplayEndOfLevelLCD_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskDisplayTimer,
			NULL,
			(void *)&TaskDisplayTimer_stk[TASK_STACKSIZE-1],
			TaskDisplayTimerPrio,
			TaskDisplayTimerPrio,
			TaskDisplayTimer_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskDisplayLevel,
			NULL,
			(void *)&TaskDisplayLevel_stk[TASK_STACKSIZE-1],
			TaskDisplayLevelPrio,
			TaskDisplayLevelPrio,
			TaskDisplayLevel_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskUpdateQuestionPosedLCD,
			NULL,
			(void *)&TaskUpdateQuestionPosedLCD_stk[TASK_STACKSIZE-1],
			TaskUpdateQuestionPosedLCDPrio,
			TaskUpdateQuestionPosedLCDPrio,
			TaskUpdateQuestionPosedLCD_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskUpdateQuestionNumberLCD,
			NULL,
			(void *)&TaskUpdateQuestionNumberLCD_stk[TASK_STACKSIZE-1],
			TaskUpdateQuestionNumberLCDPrio,
			TaskUpdateQuestionNumberLCDPrio,
			TaskUpdateQuestionNumberLCD_stk,
			TASK_STACKSIZE,
			NULL,
			0);
}

/**
 * Creates VGA OUT DISPLAY TASKS.
 * Pre: Nothing
 * Post: Tasks under VGA OUT DISPLAY TASKS are created
 * Return: Nothing
 */
static void createVGATasks(void) {
	OSTaskCreateExt(TaskDrawAnimationsVGA,
			NULL,
			(void *)&TaskDrawAnimationsVGA_stk[TASK_STACKSIZE-1],
			TaskDrawAnimationsVGAPrio,
			TaskDrawAnimationsVGAPrio,
			TaskDrawAnimationsVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskDisplayEndOfLevelVGA,
			NULL,
			(void *)&TaskDisplayEndOfLevelVGA_stk[TASK_STACKSIZE-1],
			TaskDisplayEndOfLevelVGAPrio,
			TaskDisplayEndOfLevelVGAPrio,
			TaskDisplayEndOfLevelVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);
	// Spencer additions start here!
	OSTaskCreateExt(TaskDisplayResultVGA,
			NULL,
			(void *)&TaskDisplayResultVGA_stk[TASK_STACKSIZE-1],
			TaskDisplayResultVGAPrio,
			TaskDisplayResultVGAPrio,
			TaskDisplayResultVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskDisplayTimerVGA,
			NULL,
			(void *)&TaskDisplayTimerVGA_stk[TASK_STACKSIZE-1],
			TaskDisplayTimerVGAPrio,
			TaskDisplayTimerVGAPrio,
			TaskDisplayTimerVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskDisplayLevelVGA,
			NULL,
			(void *)&TaskDisplayLevelVGA_stk[TASK_STACKSIZE-1],
			TaskDisplayLevelVGAPrio,
			TaskDisplayLevelVGAPrio,
			TaskDisplayLevelVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskUpdateQuestionPosedVGA,
			NULL,
			(void *)&TaskUpdateQuestionPosedVGA_stk[TASK_STACKSIZE-1],
			TaskUpdateQuestionPosedVGAPrio,
			TaskUpdateQuestionPosedVGAPrio,
			TaskUpdateQuestionPosedVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	OSTaskCreateExt(TaskUpdateQuestionNumberVGA,
			NULL,
			(void *)&TaskUpdateQuestionNumberVGA_stk[TASK_STACKSIZE-1],
			TaskUpdateQuestionNumberVGAPrio,
			TaskUpdateQuestionNumberVGAPrio,
			TaskUpdateQuestionNumberVGA_stk,
			TASK_STACKSIZE,
			NULL,
			0);
	// Spencer additions ends here!
}

/**
 * Clears the VGAAnimationCuesFlags.
 * Pre: Nothing
 * Post: VGAAnimationCuesFlags has value 0 (neutral phase)
 * Return: Nothing
 */
void explodeVGAAnimationCuesFlags(void) {
	INT8U err;
	int j; // for for loop
	for (j=0; j<3; j++) {
		OSFlagPost(VGAAnimationCuesFlags, (1 << j), OS_FLAG_CLR, &err);
	}
}

/**
 * Destroy the system.
 * Pre: Nothing
 * Post: System is destroyed.
 * Return: Nothing
 */
void explodeBinaryMathGame(void) {
	INT8U err;
	INT8U i;
	int j, k; // for for and while loop
	//printf("1");
	// Reset generalities...
	explode_seven_segment();
	LCD_clear();
	set_ledg(0);
	set_ledr(0);
	//VGA_box(0,0,640,480,0x0000); // TODO: This takes a long time...?
	// Clear the character buffer
	j = 0;
	k = 0;
	while (j <= 80)
	{
		k = 0;
		while (k <= 60)
		{
			VGA_text(j, k, " ");
			k++;
		}
		j++;
	}
	//printf("2");
	// Explode Tasks
	for (i=1; i<=BIGGEST_TASK_PRIO; i++) {
		//printf("Prio %d", i);
		if (i != TaskScanKeyPrio) {
			OSTaskDel(i);
			OSTaskDelReq(i);
		}
		OS_TaskStkClr ((void*)TaskStartup_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskScanKey_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskScanSwitch_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskSubmit_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskUpdateQuestion_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskUpdateTimer_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskDisplayTimer_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskDisplayLevel_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskUpdateQuestionPosedLCD_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskUpdateQuestionNumberLCD_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskDisplayResultLCD_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
		OS_TaskStkClr ((void*)TaskDisplayEndOfLevelLCD_stk[TASK_STACKSIZE], TASK_STACKSIZE, 0);
	}
	//printf("3");
	// Explode Semaphores
	KeyPress1Sem = OSSemDel(KeyPress1Sem, OS_DEL_ALWAYS, &err);
	KeyPress2Sem = OSSemDel(KeyPress2Sem, OS_DEL_ALWAYS, &err);
	KeyPress3Sem = OSSemDel(KeyPress3Sem, OS_DEL_ALWAYS, &err);
	SwitchValueSem = OSSemDel(SwitchValueSem, OS_DEL_ALWAYS, &err);
	UpdateQuestionSem = OSSemDel(UpdateQuestionSem, OS_DEL_ALWAYS, &err);
	DisplayResultSem = OSSemDel(DisplayResultSem, OS_DEL_ALWAYS, &err);
	LevelDisplaySem = OSSemDel(LevelDisplaySem, OS_DEL_ALWAYS, &err);
	HEXDisplaySem = OSSemDel(HEXDisplaySem, OS_DEL_ALWAYS, &err);
	VGADisplaySem = OSSemDel(VGADisplaySem, OS_DEL_ALWAYS, &err);
	LCDDisplaySem = OSSemDel(LCDDisplaySem, OS_DEL_ALWAYS, &err);
	//printf("4");
	// Explode Mailboxes
	QuestionPosedMbox = OSMboxDel(QuestionPosedMbox, OS_DEL_ALWAYS, &err);
	QuestionNumberMbox = OSMboxDel(QuestionNumberMbox, OS_DEL_ALWAYS, &err);
	// Explode flags EXCEPT FOR ResetStateFlags
	for (j=0; j<4; j++) {
		OSFlagPost(LevelGoFlags, (1 << j), OS_FLAG_CLR, &err);
		OSFlagPost(ProgramStateFlags, (1 << j), OS_FLAG_CLR, &err);
	}
	explodeVGAAnimationCuesFlags();
	//printf("Am I dead yet?");

	OnQuestionNum = 0;
	QuestionsCorrect = 0;
	// Set current level to Level 0 on startup
	CurrentLevelNumber = 0; // Normally start at 0, start at other levels for debugging
	CurrentLevel = Levels[CurrentLevelNumber];

	// Make Semaphores
	KeyPress1Sem = OSSemCreate(0);
	KeyPress2Sem = OSSemCreate(0);
	KeyPress3Sem = OSSemCreate(0);
	SwitchValueSem = OSSemCreate(1);
	UpdateQuestionSem = OSSemCreate(1);
	DisplayResultSem = OSSemCreate(0);
	LevelDisplaySem = OSSemCreate(0);
	HEXDisplaySem = OSSemCreate(1);
	VGADisplaySem = OSSemCreate(1);
	LCDDisplaySem = OSSemCreate(1);

	// Make Mailboxes
	QuestionPosedMbox = OSMboxCreate((void*)0);
	QuestionNumberMbox = OSMboxCreate((void*)0);

	OSTaskCreateExt(TaskStartup,
			NULL,
			(void *)&TaskStartup_stk[TASK_STACKSIZE-1],
			TaskStartupPrio,
			TaskStartupPrio,
			TaskStartup_stk,
			TASK_STACKSIZE,
			NULL,
			0);
}


/** TASKS START HERE **/
/* General Tasks */
/**
 * Starts the system and any accompanying tasks.
 * Priority Planning: This task should have priority 1.
 * Timing Constraints: This task should have none as it deletes itself after creating other tasks
 * and servicing other uC/OS-II routines, such as initial OSFLAG posts.
 */
void TaskStartup(void* pdata) {
	INT8U err;
	createGeneralTasks();
	printf("Startup...");
	// Reset LCD cursor
	LCD_cursor(0,0);
	if (EASTER_EGG_VALUE == get_hex_value_from_switches(17,0)) {
		OSFlagPost(ProgramStateFlags, PROGRAM_STATE_HEX_MODE_SET, OS_FLAG_SET, &err);
	}
	if (get_value_of_switch(17)) {
		OSFlagPost(ProgramStateFlags, PROGRAM_STATE_VGA_MODE_SET, OS_FLAG_SET, &err);
		// Write "Look at the VGA!" to top row
		//printf("Program is here");
		LCD_text("Look at the VGA!"); // No need for semaphore here as it's the only thing printed to the LCD the entire time in VGA mode
		//printf(" Now it's here");
		createVGATasks();
		//printf(" Finally, it's here");
	} else {
		// Write LVL to HEX[3:1]
		display_hex_on_seven_segment(0x38, 3);
		display_hex_on_seven_segment(0x3E, 2);
		display_hex_on_seven_segment(0x38, 1);
		createOnBoardTasks();
	}
	// First submit should show the result
	OSFlagPost(ProgramStateFlags, PROGRAM_STATE_END_LEVEL, OS_FLAG_CLR, &err);
	getReadyDisplayResult();
	// Delete this task
	OSTaskDel(TaskStartupPrio);
}

/**
 * Scans for pushbutton key press, enables appropriate semaphore (KeyPress1Sem,
 * KeyPress2Sem, KeyPress3Sem) when player does this.
 * Priority Planning: This task should have one of the highest priorities, but a lower priority
 * than TaskScanSwitch.
 * Timing Constraints: This task should be (in practice) no more than 5 atomic operations
 * without counting the DELAY. @50Mhz clock, this is 100ns.
 */
void TaskScanKey(void* pdata) {
	for (;;) {
		if (KEYS&KEY1) {
			//OSSemPost(KeyPress1Sem);
			//wait_for_key_depress(KEY1);
			explodeBinaryMathGame();
		}
		else if (KEYS&KEY2) {
			OSSemPost(KeyPress2Sem);
		}
		else if (KEYS&KEY3) {
			OSSemPost(KeyPress3Sem);
		}
		OSTimeDlyHMSM(0,0,0,180); // TODO: Is this button debouncing good enough?
	}
}

/**
 * Writes the value of the switches to SwitchValue. SwitchValue is guarded by
 * SwitchValueSem.
 * Priority Planning: This task should have one of the highest priorities.
 * Timing Constraints: This task should be (in practice) no more than 3 atomic operations
 * without counting the DELAY. @50Mhz clock, this is 60ns.
 */
void TaskScanSwitch(void* pdata) {
	INT8U err;
	for (;;) {
		OSSemPend(SwitchValueSem, 0, &err);
		SwitchValue = get_value_of_all_switches();
		//printf("%u\n",SwitchValue); // DEBUG LINE
		OSSemPost(SwitchValueSem);
		OSTimeDly(1);
	}
}

/**
 * Runs when KeyPress3Sem is ready. Delegates whether to show end of level results
 * (post LevelDisplaySem), create a new question (posts UpdateQuestionSem) or to
 * display the result (posts DisplayResultSem).
 * Priority Planning: This task should be medium priority.
 * Timing Constraints: This task should be (in practice) no more than 6 atomic operations
 * + explodeVGAAnimationCuesFlags() without counting the DELAY. @50Mhz clock, this is 220ns.
 */
void TaskSubmit(void* pdata) {
	INT8U err;
	int value;
	for (;;) {
		// Wait for submit...
		OSSemPend(KeyPress3Sem, 0, &err);
		value = OSFlagQuery(ProgramStateFlags, &err);
		// Restore neutral animations
		explodeVGAAnimationCuesFlags();
		//printf("0x%X",value); // DEBUG LINE
		// Are we going to display the result?
		if (value&PROGRAM_STATE_DISPLAY_RESULT) {
			getReadyNewQuestion();
			OSSemPost(DisplayResultSem);
		} else if (value&PROGRAM_STATE_END_LEVEL) { // Or are we going to display new level info?
			OSSemPost(LevelDisplaySem);
		} else { // Or generate a new question?
			getReadyDisplayResult();
			OSSemPost(UpdateQuestionSem);
		}
	}
}

/**
 * Runs when LevelDisplaySem is ready. Prints end of level data to the LCD screen
 * including statistics such as level score and whether the player is ready to
 * advance in the game. If the player has beaten the last level, this function
 * is to print a "YOU WIN!" message before resetting the game.
 * Priority Planning: This task should be medium priority, but lower priority than
 * TaskSubmit.
 * Timing Constraints: This task should be (in practice) no more than 45 atomic operations
 * without counting the DELAY. @50Mhz clock, this is 900ns.
 */
void TaskDisplayEndOfLevelLCD(void* pdata) {
	INT8U err;
	double roundPercent;
	char roundPercentStr[5];
	for (;;) {
		OSSemPend(LevelDisplaySem, 0, &err);
		// Reset timer to TIME_TO_DISPLAY_LEVEL_END
		TimeRemaining = TIME_TO_DISPLAY_LEVEL_END;
		// Get percentage for round
		roundPercent = QuestionsCorrect*100.0/NUM_QUESTIONS_PER_LEVEL;
		// Put its float value in roundPercentStr
		sprintf(roundPercentStr, "%.1f", roundPercent);
		// Clear the LCD and reset cursor...?
		OSSemPend(LCDDisplaySem, 0, &err); // Acquire semaphore to write to LCD
		LCD_clear();
		LCD_cursor(0,0);
		// Print level score on line 1
		LCD_text("Lvl score: ");
		LCD_text(roundPercentStr);
		// Prepare to print result on line 2
		LCD_cursor(0,1);
		// Are we advancing or resetting the level?
		if (roundPercent >= MIN_PERCENTAGE_CORRECT_FOR_PROMOTION) {
			// Normal next level case
			if (CurrentLevelNumber < MAX_NUMBER_OF_LEVELS - 1) {
				LCD_text("Next Lvl Ready!");
				OSSemPost(LCDDisplaySem); // Repost once done
				getReadyGoForwardLevel();
				updateLevel();
			} else { // Game over case
				LCD_text("You win! Replay?");
				OSSemPost(LCDDisplaySem); // Repost once done
				// Specifically set the win screen to show for TIME_TO_DISPLAY_END_OF_GAME instead
				TimeRemaining = TIME_TO_DISPLAY_END_OF_GAME;
				getReadyGoForwardLevel();
				updateLevel();
			}
		} else {
			LCD_text("Repeat Lvl...");
			OSSemPost(LCDDisplaySem); // Repost once done
			clearLevel();
		}
	}
}

/**
 * Compares SwitchValue against CurrentCorrectAnswer and communicates to the player
 * if they were correct, incrementing QuestionsCorrect if so.
 * Shows "correct" or "incorrect" messages on the LCD following a submit and
 * before the new question is generated.
 * Priority Planning: This task should be medium priority, but lower priority than TaskSubmit, and
 * higher priority than TaskUpdateQuestion.
 * Timing Constraints: This task should be (in practice) no more than 30 atomic operations
 * without counting the DELAY. @50Mhz clock, this is 600ns.
 */
void TaskDisplayResultLCD(void* pdata) {
	INT8U err;
	char currentCorrectAnswer[11];
	for (;;) {
		OSSemPend(DisplayResultSem, 0, &err);
		// Reset timer to TIME_TO_DISPLAY_RESULT
		TimeRemaining = TIME_TO_DISPLAY_RESULT;
		// Clear the LCD and reset cursor...?
		OSSemPend(LCDDisplaySem, 0, &err); // Acquire semaphore to write to LCD
		LCD_clear();
		LCD_cursor(0,0);
		// Was the answer correct?
		if (CurrentCorrectAnswer == SwitchValue) {
			// Write to LCD display.
			LCD_text("CORRECT!");
			OSSemPost(LCDDisplaySem); // Repost once done
			// Set LEDG and print CORRECT message
			set_ledg_bit(NUM_QUESTIONS_PER_LEVEL-OnQuestionNum);
			QuestionsCorrect++;
		} else {
			// Print INCORRECT message
			LCD_text("INCORRECT");
			LCD_cursor(0,1);
			if (inHexMode()) {
				sprintf(currentCorrectAnswer, "0x%X", CurrentCorrectAnswer);
			} else {
				sprintf(currentCorrectAnswer, "%d", CurrentCorrectAnswer);
			}
			LCD_text("Ans: ");
			LCD_text(currentCorrectAnswer);
			OSSemPost(LCDDisplaySem); // Repost once done
		}
	}
}

/**
 * Runs when UpdateQuestionSem is ready.
 * Increments OnQuestionNum. Creates a question using randomly generated
 * integers using CurrentLevel.minNumber and CurrentLevel.maxNumber as bounds, and a
 * randomly generated operation to be compared against allowOperations; uses this information
 * to calculate a new value for CurrentCorrectAnswer, and exports this information to a refToChar via
 * sprintf() to be mailboxed to TaskUpdateQuestionPosedLCD() or
 * TaskUpdateQuestionPosedVGA() using QuestionPosedMbox. If OnQuestionNum >
 * NUM_QUESTIONS_PER_LEVEL (should be the case OnQuestionNum == NUM_QUESTIONS_PER_LEVEL+1),
 * runs updateLevel().
 * Priority Planning: This task should be medium priority, but higher than TaskSubmit.
 * Timing Constraints: This task should be (in practice) no more than approximately 16 atomic
 * operations + updateLevel() + [getNumber() or getNumberMult()]*2 + getOperation() + getOperationSymbol() +
 * getAns() without counting the DELAY. @50Mhz clock, this is 800ns.
 */
void TaskUpdateQuestion(void* pdata) {
	INT8U err;
	char questionPosed[40], questionNumber[40];
	int num1, num2; // Numbers for randomly generated question
	unsigned op, op_char; // Operation for randomly generated question
	for (;;) {
		OSSemPend(UpdateQuestionSem, 0, &err);
		// Clear the LCD...?
		LCD_clear();
		// Update question
		OnQuestionNum++;
		// Ready to end level?
		if (OnQuestionNum == NUM_QUESTIONS_PER_LEVEL) {
			getReadyEndOfLevel();
		}
		TimeRemaining = CurrentLevel.timePerQuestion;
		op = getOperation(CurrentLevel);
		op_char = getOperationSymbol(op);
		if ('*' == op_char) {
			num1 = getNumberMult(CurrentLevel);
			num2 = getNumberMult(CurrentLevel);
		} else {
			num1 = getNumber(CurrentLevel);
			num2 = getNumber(CurrentLevel);
		}
		CurrentCorrectAnswer = getAns(num1, op, num2);
		//printf("%u\n",CurrentCorrectAnswer); // DEBUG LINE
		// Display question posed in HEX?
		if (inHexMode()) {
			sprintf(questionPosed, "0x%X%c0x%X", num1, op_char, num2);
		} else {
			sprintf(questionPosed, "%d%c%d", num1, op_char, num2);
		}
		// Question number string creation
		sprintf(questionNumber, "Q.%d", OnQuestionNum);
		// Randomize?
		if (OnQuestionNum > 2) {
			srand((unsigned)OSTimeGet());
		}
		// Send away!
		OSMboxPost(QuestionPosedMbox, (void*)questionPosed);
		OSMboxPost(QuestionNumberMbox, (void*)questionNumber);
	}
}

/**
 * Runs every second. Decrements TimeRemaining by 1; if 0 == TimeRemaining, posts
 * KeyPress3Sem to invoke TaskSubmit().
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than 5 atomic operations
 * without counting the DELAY. @50Mhz clock, this is 100ns.
 */
void TaskUpdateTimer(void* pdata) {
	INT8U err;
	for (;;) {
		OSTimeDlyHMSM(0,0,1,0);
		TimeRemaining--;
		if (TimeRemaining == TIME_TO_BE_WORRIED) {
			AnimationState = 1;
			OSFlagPost(VGAAnimationCuesFlags, VGA_ANIMATION_CUES_WORRIED, OS_FLAG_SET, &err);
		}
		if (0 == TimeRemaining) {
			OSSemPost(KeyPress3Sem);
		}
	}
}

/* On-Board Display Task */
/**
 * Writes TimeRemaining on HEX[7:6]. HEXDisplaySem is used for guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 10 atomic
 * operations without counting the DELAY. @50Mhz clock, this is 200ns.
 */
void TaskDisplayTimer(void* pdata) {
	INT8U err;
	int displayTimerAs; // Either 10 (DEC) or 16 (HEX) dependent on mode.
	for (;;) {
		OSSemPend(HEXDisplaySem, 0, &err);
		if (inHexMode()) {
			displayTimerAs = 16;
		} else {
			displayTimerAs = 10;
		}
		display_hex_on_seven_segment(get_display_from_hex(TimeRemaining/displayTimerAs), 7);
		display_hex_on_seven_segment(get_display_from_hex(TimeRemaining%displayTimerAs), 6);
		OSSemPost(HEXDisplaySem);
		OSTimeDly(1);
	}
}

/**
 * Writes CurrentLevelNumber on HEX0. HEXDisplaySem is used for guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 10 atomic
 * operations without counting the DELAY. @50Mhz clock, this is 200ns.
 */
void TaskDisplayLevel(void* pdata) {
	INT8U err;
	for (;;) {
		OSSemPend(HEXDisplaySem, 0, &err);
		display_hex_on_seven_segment(get_display_from_hex(CurrentLevelNumber), 0);
		OSSemPost(HEXDisplaySem);
		OSTimeDly(1);
	}
}

/**
 * Updates the LCD using the value of the Mbox QuestionPosedMbox. LCDDisplaySem is used for
 * guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 15 +
 * STRINGLENGTH(s) atomic operations without counting the DELAY. Assuming a worst-case
 * STRINGLENGTH(s) of 16 @50Mhz clock, this is 620ns.
 */
void TaskUpdateQuestionPosedLCD(void* pdata) {
	INT8U err;
	char* questionPosed;
	for (;;) {
		questionPosed = (char*) OSMboxPend(QuestionPosedMbox, 0, &err);
		OSSemPend(LCDDisplaySem, 0, &err);
		LCD_cursor(0,0);
		LCD_text("What is: ");
		LCD_cursor(0,1);
		LCD_text(questionPosed);
		OSSemPost(LCDDisplaySem);
		OSTimeDly(1);
	}
}

/**
 * Updates the LCD using the value of the Mbox QuestionNumberMbox. LCDDisplaySem is used for
 * guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 10 +
 * STRINGLENGTH(s) atomic operations without counting the DELAY. Assuming a worst-case
 * STRINGLENGTH(s) of 4 @50Mhz clock, this is 280ns.
 */
void TaskUpdateQuestionNumberLCD(void* pdata) {
	INT8U err;
	char* questionNumber;
	for (;;) {
		questionNumber = (char*) OSMboxPend(QuestionNumberMbox, 0, &err);
		OSSemPend(LCDDisplaySem, 0, &err);
		LCD_cursor(13,0);
		LCD_text(questionNumber);
		OSSemPost(LCDDisplaySem);
		OSTimeDly(1);
	}
}

/* VGA Display Task */
/**
 * TODO
 */
void TaskDrawAnimationsVGA(void* pdata) {
	INT8U err;
	int value;
	for (;;) {
		value = OSFlagQuery(VGAAnimationCuesFlags, &err);
		// Reset bg before printing
		spencerBGReset();
		// Print!
		if (value&VGA_ANIMATION_CUES_WIN) {
			if (1 == AnimationState) {
				spencerWinPose1();
			} else if (2 == AnimationState) {
				spencerWinPose2();
			} else {
				spencerWinPose3();
			}
		} else if (value&VGA_ANIMATION_CUES_LOSE) {
			if (1 == AnimationState) {
				spencerLosePose1();
			} else if (2 == AnimationState) {
				spencerLosePose2();
			} else {
				spencerLosePose3();
			}
		} else if (value&VGA_ANIMATION_CUES_WORRIED) {
			if (1 == AnimationState) {
				spencerTimeRunningOutPose1();
			} else if (2 == AnimationState) {
				spencerTimeRunningOutPose2();
			} else {
				spencerTimeRunningOutPose3();
			}
		} else {
			if (1 == AnimationState) {
				spencerNeutralPose1();
			} else if (2 == AnimationState) {
				spencerNeutralPose2();
			} else {
				spencerNeutralPose1();
			}
		}
		AnimationState++;
		if (AnimationState > 3) AnimationState = 2;
		OSTimeDly(4);
	}
}
// Spencer additions start here

/**
 * TODO
 */
void TaskDisplayEndOfLevelVGA(void* pdata) {
	INT8U err;
	double roundPercent;
	char roundPercentStr[5];
	for (;;) {
		OSSemPend(LevelDisplaySem, 0, &err);
		// Reset timer to TIME_TO_DISPLAY_LEVEL_END
		TimeRemaining = TIME_TO_DISPLAY_LEVEL_END;
		// Get percentage for round
		roundPercent = QuestionsCorrect*100.0/NUM_QUESTIONS_PER_LEVEL;
		// Put its float value in roundPercentStr
		sprintf(roundPercentStr, "%.1f", roundPercent);
		// Clear the LCD and reset cursor...?
		OSSemPend(LCDDisplaySem, 0, &err); // Acquire semaphore to write to LCD
		LCD_clear();
		LCD_cursor(0,0);
		// Print level score on line 1
		LCD_text("Lvl score: ");
		LCD_text(roundPercentStr);
		// Prepare to print result on line 2
		LCD_cursor(0,1);
		// Get ready to display first frame
		AnimationState = 1;
		// Are we advancing or resetting the level?
		if (roundPercent >= MIN_PERCENTAGE_CORRECT_FOR_PROMOTION) {
			// Normal next level case
			if (CurrentLevelNumber < MAX_NUMBER_OF_LEVELS - 1) {
				LCD_text("Next Lvl Ready!");
				OSSemPost(LCDDisplaySem); // Repost once done
				getReadyGoForwardLevel();
				updateLevel();
			} else { // Game over case
				LCD_text("You win! Replay?");
				OSSemPost(LCDDisplaySem); // Repost once done
				// Specifically set the win screen to show for TIME_TO_DISPLAY_END_OF_GAME instead
				TimeRemaining = TIME_TO_DISPLAY_END_OF_GAME;
				getReadyGoForwardLevel();
				updateLevel();
			}
			OSFlagPost(VGAAnimationCuesFlags, VGA_ANIMATION_CUES_WIN, OS_FLAG_SET, &err);
		} else {
			LCD_text("Repeat Lvl...");
			OSSemPost(LCDDisplaySem); // Repost once done
			OSFlagPost(VGAAnimationCuesFlags, VGA_ANIMATION_CUES_LOSE, OS_FLAG_SET, &err);
			clearLevel();
		}
	}
}

/**
 * Compares SwitchValue against CurrentCorrectAnswer and communicates to the player
 * if they were correct, incrementing QuestionsCorrect if so.
 * Shows "correct" or "incorrect" messages on the VGA following a submit and
 * before the new question is generated.
 * Priority Planning: This task should be medium priority, but lower priority than TaskSubmit, and
 * higher priority than TaskUpdateQuestion.
 * Timing Constraints: This task should be (in practice) no more than 30 atomic operations
 * without counting the DELAY. @50Mhz clock, this is 600ns.
 */
void TaskDisplayResultVGA(void* pdata) {
	INT8U err;
	char currentCorrectAnswer[11];
	for (;;) {
		OSSemPend(DisplayResultSem, 0, &err);
		// Reset timer to TIME_TO_DISPLAY_RESULT
		TimeRemaining = TIME_TO_DISPLAY_RESULT;
		// Was the answer correct?
		//printf("%u\n",SwitchValue);
		//printf("A test");
		// Get ready to display first frame
		AnimationState = 1;
		if (CurrentCorrectAnswer == SwitchValue) {
			// Set LEDG and print CORRECT message
			set_ledg_bit(NUM_QUESTIONS_PER_LEVEL-OnQuestionNum);
			// Write to LCD display.
			VGA_text(45, 4, "CORRECT!");
			OSFlagPost(VGAAnimationCuesFlags, VGA_ANIMATION_CUES_WIN, OS_FLAG_SET, &err);
			QuestionsCorrect++;
		} else {
			// Print INCORRECT message
			VGA_text(45, 4, "INCORRECT");
			OSFlagPost(VGAAnimationCuesFlags, VGA_ANIMATION_CUES_LOSE, OS_FLAG_SET, &err);
			if (inHexMode()) {
				sprintf(currentCorrectAnswer, "0x%X", CurrentCorrectAnswer);
			} else {
				sprintf(currentCorrectAnswer, "%d", CurrentCorrectAnswer);
			}	goto start;
			start:
			VGA_text(35, 50, "Correct Answer: ");
			VGA_text(51, 50, currentCorrectAnswer);
		}
	}
}

/**
 * Writes TimeRemaining to VGA. HEXDisplaySem is used for guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 10 atomic
 * operations without counting the DELAY. @50Mhz clock, this is 200ns.
 */
void TaskDisplayTimerVGA(void* pdata) {
	INT8U err;
	int displayTimerAs; // Either 10 (DEC) or 16 (HEX) dependent on mode.
	char test[40];

	char titleTestBasic[79];
	char titleTestBasic2[79];
	char titleTestBasic3[78];
	char titleTestBasic4[79];

	for (;;) {
		OSSemPend(HEXDisplaySem, 0, &err);
		if (inHexMode()) {
			displayTimerAs = 16;
		} else {
			displayTimerAs = 10;
		}
		display_hex_on_seven_segment(get_display_from_hex(TimeRemaining/displayTimerAs), 7);
		display_hex_on_seven_segment(get_display_from_hex(TimeRemaining%displayTimerAs), 6);

		// Defining position values (so that graphic can easily be repositioned later if necessary)

		sprintf(test, "Spencer was here");
		//VGA_text(32,40,test);

		// TODO Move if you will, but DO NOT DELETE, NO MATTER WHAT
		// http://patorjk.com/software/taag/#p=display&f=Small&t=BINARY%20MATH%20GAME
		sprintf(titleTestBasic, " ___ ___ _  _   _   _____   __  __  __   _ _____ _  _    ___   _   __  __ ___ ");
		sprintf(titleTestBasic2, "| _ )_ _| \\| | /_\\ | _ \\ \\ / / |  \\/  | /_\\_   _| || |  / __| /_\\ |  \\/  | __|");
		sprintf(titleTestBasic3, "| _ \\| || .` |/ _ \\|   /\\ v /  | |\\/| |/ _ \\| | | __ | | (_ |/ _ \\| |\\/| | _|");
		sprintf(titleTestBasic4, "|___/___|_|\\_/_/ \\_\\_|_\\ |_|   |_|  |_/_/ \\_\\_| |_||_|  \\___/_/ \\_\\_|  |_|___|");


//		VGA_text(1, 8, titleTestBasic);
	//	VGA_text(1, 9, titleTestBasic2);
		//VGA_text(1, 10, titleTestBasic3);
		//VGA_text(1, 11, titleTestBasic4);



		OSSemPost(HEXDisplaySem);
		OSTimeDly(1);
	}
}

/**
 * Writes CurrentLevelNumber to the VGA. HEXDisplaySem is used for guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 10 atomic
 * operations without counting the DELAY. @50Mhz clock, this is 200ns.
 */
void TaskDisplayLevelVGA(void* pdata) {
	INT8U err;
	for (;;) {
		OSSemPend(HEXDisplaySem, 0, &err);
		display_hex_on_seven_segment(get_display_from_hex(CurrentLevelNumber), 0);
		OSSemPost(HEXDisplaySem);
		OSTimeDly(1);
	}
}

/**
 * Updates the VGA using the value of the Mbox QuestionPosedMbox. VGASem is used for
 * guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 15 +
 * STRINGLENGTH(s) atomic operations without counting the DELAY. Assuming a worst-case
 * STRINGLENGTH(s) of 16 @50Mhz clock, this is 620ns.
 */
void TaskUpdateQuestionPosedVGA(void* pdata) {
	INT8U err;
	char* questionPosed;
	for (;;) {
		questionPosed = (char*) OSMboxPend(QuestionPosedMbox, 0, &err);
		OSSemPend(VGADisplaySem, 0, &err);
		LCD_cursor(0,0);
		LCD_text("What is: ");
		LCD_cursor(0,1);
		LCD_text(questionPosed);
		OSSemPost(VGADisplaySem);
		OSTimeDly(1);
	}
}

/**
 * Updates the VGA using the value of the Mbox QuestionNumberMbox. VGASem is used for
 * guarding.
 * Priority Planning: This task may be low priority.
 * Timing Constraints: This task should be (in practice) no more than approximately 10 +
 * STRINGLENGTH(s) atomic operations without counting the DELAY. Assuming a worst-case
 * STRINGLENGTH(s) of 4 @50Mhz clock, this is 280ns.
 */
void TaskUpdateQuestionNumberVGA(void* pdata) {
	INT8U err;
	char* questionNumber;
	for (;;) {
		questionNumber = (char*) OSMboxPend(QuestionNumberMbox, 0, &err);
		OSSemPend(VGADisplaySem, 0, &err);
		VGA_text(500, 64, questionNumber);
		OSSemPost(VGADisplaySem);
		OSTimeDly(1);
	}
}
// Spencer additions end here!


/* The main function creates two task and starts multi-tasking */
int main(void) {
	// General error var...
	INT8U err;

	// Reset generalities...
	explode_seven_segment();
	LCD_clear();
	set_ledg(0);
	set_ledr(0);
	// Spencer additions start here
	// Clear the screen (render the entire screen black)
	VGA_box(0,0,640,480,0xFFFF);
	// Clear the character buffer
	int i = 0;
	int j = 0;
	while (i <= 80)
	{
		j = 0;
		while (j <= 60)
		{
			VGA_text(i, j, " ");
			j++;
		}
		i++;
	}
	// Spencer additions end here

	// Prepare randomization...
	srand((unsigned)OSTimeGet());

	// Make levels...
	populateLevels();

	// Set current level to Level 0 on startup
	CurrentLevelNumber = 0; // Normally start at 0, start at other levels for debugging
	CurrentLevel = Levels[CurrentLevelNumber];

	// Make Semaphores
	KeyPress1Sem = OSSemCreate(0);
	KeyPress2Sem = OSSemCreate(0);
	KeyPress3Sem = OSSemCreate(0);
	SwitchValueSem = OSSemCreate(1);
	UpdateQuestionSem = OSSemCreate(1);
	DisplayResultSem = OSSemCreate(0);
	LevelDisplaySem = OSSemCreate(0);
	HEXDisplaySem = OSSemCreate(1);
	VGADisplaySem = OSSemCreate(1);
	LCDDisplaySem = OSSemCreate(1);

	// Make Mailboxes
	QuestionPosedMbox = OSMboxCreate((void*)0);
	QuestionNumberMbox = OSMboxCreate((void*)0);

	// Make Flags
	LevelGoFlags = OSFlagCreate(0x00, &err);
	ProgramStateFlags = OSFlagCreate(0x00, &err);
	ResetStateFlags = OSFlagCreate(0x00, &err);
	VGAAnimationCuesFlags = OSFlagCreate(0x00, &err);

	// Create TaskStartup to start other tasks
	OSTaskCreateExt(TaskStartup,
			NULL,
			(void *)&TaskStartup_stk[TASK_STACKSIZE-1],
			TaskStartupPrio,
			TaskStartupPrio,
			TaskStartup_stk,
			TASK_STACKSIZE,
			NULL,
			0);

	// START!
	OSStart();
	return 0;
}

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2004 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
* Altera does not recommend, suggest or require that this reference design    *
* file be used in conjunction or combination with any other product.          *
******************************************************************************/
