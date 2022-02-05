// Functional implementation for fields regarding the DE2-115 Seven Segment HEX displays

#include "de2_seven_segment_hex.h"

// Display a hex value on one of the seven segment displays
// Pre: hex_to_display=hex_val_t to display between 0 and F
//      seven_segment=display on FPGA from 0 to 7 to display hex_to_display
// Post: hex_to_display displayed on seven_segment on FPGA
// Return: Nothing
void display_hex_on_seven_segment (hex_val_t hex, int seven_segment) {
  switch (seven_segment) {
    case 0:
      HEX3_HEX0 &= ~0x7F;
      HEX3_HEX0 |= (hex << 0);
      break;
     case 1:
      HEX3_HEX0 &= ~0x7F00;
      HEX3_HEX0 |= (hex << 8);
      break;
     case 2:
      HEX3_HEX0 &= ~0x7F0000;
      HEX3_HEX0 |= (hex << 16);
      break;
     case 3:
      HEX3_HEX0 &= ~0x7F000000;
      HEX3_HEX0 |= (hex << 24);
      break;
     case 4:
      HEX7_HEX4 &= ~0x7F;
      HEX7_HEX4 |= (hex << 0);
      break;
    case 5:
      HEX7_HEX4 &= ~0x7F00;
      HEX7_HEX4 |= (hex << 8);
      break;
     case 6:
      HEX7_HEX4 &= ~0x7F0000;
      HEX7_HEX4 |= (hex << 16);
      break;
     case 7:
      HEX7_HEX4 &= ~0x7F000000;
      HEX7_HEX4 |= (hex << 24);
      break;    
    default: return;
  }
}

hex_val_t get_display_from_hex (int hex) {
  switch (hex) {
    case 0x0: return HEX_0;
    case 0x1: return HEX_1;
    case 0x2: return HEX_2;
    case 0x3: return HEX_3;
    case 0x4: return HEX_4;
    case 0x5: return HEX_5;
    case 0x6: return HEX_6;
    case 0x7: return HEX_7;
    case 0x8: return HEX_8;
    case 0x9: return HEX_9;
    case 0xA: return HEX_A;
    case 0xB: return HEX_B;
    case 0xC: return HEX_C;
    case 0xD: return HEX_D;
    case 0xE: return HEX_E;
    case 0xF: return HEX_F;
    default: return 0x0;
  }
}

// Displays a decimal number on the DE2 HEX displays
// If overflow (number > 99999999), number displays 99999999
// Pre: number = number to display as a decimal
//      fill_zeros = bool cast integer whether to fill unused displays with zeroes
// Post: number is displayed on the seven segment displays
// Return: Nothing
void display_a_decimal_number_on_seven_segment (int number, int fill_zeros) {
	display_a_decimal_number_starting_on_any_seven_segment(number, fill_zeros, 0);
}

// Displays a decimal number on the DE2 HEX displays
// starting on any HEX display
// If overflow (number > 99999999), number displays 99999999, or however many 9s
// fit into the display
// Pre: number = number to display as a decimal
//      fill_zeros = bool cast integer whether to fill unused displays with zeroes
//      display_to_start_on = int representing which HEX display to start on (valid range is 0-7 inclusive)
// Post: number is displayed on the seven segment displays
// Return: Nothing
void display_a_decimal_number_starting_on_any_seven_segment (int number, int fill_zeros, int display_to_start_on) {
	//printf("number=%d\n", number);
	// Temp ints
	int temp_higher = number, temp_lower = 0;
	//printf("temp_higher=%d\n", temp_higher);
	// For for loop
	int i = 0;
	// Int cast boolean for whether it has seen a non-zero value before
	int has_seen_non_zero = 0; // assume false
	// Int for current hex display to write to
	int display_to = 0;
	// Int for current value to write to HEX display_to
	int display_val = 0;
	// Int place to start in for loop
	int start_val = 0;
	// 10s array
	int array_of_temp_higher[] = {10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};
	// If number is 0, print 0 to HEX0 and return
	if (0 == number) {
		display_hex_on_seven_segment(get_display_from_hex(0),0);
		return;
	}
	else if (number > 10000000 || fill_zeros) start_val = 0;
	else if (number > 1000000) start_val = 1;
	else if (number > 100000) start_val = 2;
	else if (number > 10000) start_val = 3;
	else if (number > 1000) start_val = 4;
	else if (number > 100) start_val = 5;
	else start_val = 6; 
	// Normal program execution
	for (i = start_val; i < NUMBER_OF_SEVEN_SEGMENT_DISPLAYS; i++) {
		if (temp_higher >= 9*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 9*array_of_temp_higher[i];
			temp_higher = 9;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 8*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 8*array_of_temp_higher[i];
			temp_higher = 8;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 7*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 7*array_of_temp_higher[i];
			temp_higher = 7;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 6*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 6*array_of_temp_higher[i];
			temp_higher = 6;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 5*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 5*array_of_temp_higher[i];
			temp_higher = 5;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 4*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 4*array_of_temp_higher[i];
			temp_higher = 4;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 3*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 3*array_of_temp_higher[i];
			temp_higher = 3;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 2*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 2*array_of_temp_higher[i];
			temp_higher = 2;
			has_seen_non_zero = 1;
		} else if (temp_higher >= 1*array_of_temp_higher[i]) {
			temp_lower = temp_higher - 1*array_of_temp_higher[i];
			temp_higher = 1;
			has_seen_non_zero = 1;
		} else {
			temp_lower = temp_higher;
			temp_higher = 0;
		}
		// Calculate where to display to
		display_to = NUMBER_OF_SEVEN_SEGMENT_DISPLAYS-1-i+display_to_start_on;
		//printf("display %u on HEX display %u\n", temp_higher, display_to);
		if (display_to < NUMBER_OF_SEVEN_SEGMENT_DISPLAYS) {
			// Display there if it's a valid display!
			//if (display_to < NUMBER_OF_SEVEN_SEGMENT_DISPLAYS)
			//	printf("***display %u on HEX display %u\n", temp_higher, display_to);
			// If you want to fill with zeroes, fill it with whatever value it has	
			if (fill_zeros || 0 != temp_higher || has_seen_non_zero)
				display_hex_on_seven_segment(get_display_from_hex(temp_higher), display_to);
			// Else, if temp_higher is 0 and you don't want to fill with zeroes, fill with nothing
			else display_hex_on_seven_segment(0x0, display_to); //
		}
		// At the end, assign temp_lower to temp_higher and repeat the process with the next 10^n
		temp_higher = temp_lower;
	}
}

// Writes nothhing to all displays starting at a certain hex display
// Post: nothing is displayed on the seven segment displays
// Return: Nothing
void explode_seven_segment (void) {
	/*int i;
	for (i = display_to_start_on; i < NUMBER_OF_SEVEN_SEGMENT_DISPLAYS; i++)
		display_hex_on_seven_segment(0x0, i); // Write nothings!*/
	HEX3_HEX0 = 0;
	HEX7_HEX4 = 0;
}
