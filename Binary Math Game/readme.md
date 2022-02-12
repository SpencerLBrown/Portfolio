****Overview:****

For CME 332 at the University of Saskatchewan,
we were tasked with developing a program designed
to run in a real-time environment using the
μC/OS-II RTOS. In response to this problem, we
created a math game coded to run on the
DE2-115 Media Computer: the player would be posed
arithmetic problems and would have to answer in
binary using the board’s switches. The player
would have a certain amount of time to answer
each problem, and if that time elapsed the
program would generate a new question to pose to
the player. Depending on game mode, problems are
displayed either on the board’s LCD screen or an
external VGA monitor.

****My work:****

My primary task in this project was learning how
the DE2-115's VGA mode worked (as it was
something never taught in class), creating the
visuals seen in-game, and converting functions
and semaphores written for on-board mode to
work with VGA mode, and creating new functions
and semaphores for VGA mode where needed.

In addition to this, I assisted with coding and
debugging some of the on-board mode's functions
as the project grew in size.

****Technical Details:****

Should this program be ran, the user will require
- an Altera DE2-115 FPGA
- Quartus
- Eclipse Nios II

Steps to get it running
- Connect the FPGA to the computer, boot Quartus,
and program it with the Media Computer.
- Create a workspace in Eclipse Nios II, adding the
two folders found within this directory.
- Select labProject_BinaryMathGame to run on the
appropriate hardware connection, then press run.

Note:
If switch 17 on the FPGA is high on system
start/restart, VGA out display mode is entered.
Else, on-board display mode is entered. In its
current form, Binary Math Game does not support
hot swapping between modes. If you wish to change
game modes, you will need to power-down, restart,
and reprogram the board.
