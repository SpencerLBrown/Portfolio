// Header file for functions outlined in de2_seven_segment_hex.h

#ifndef __SEVEN_SEGMENT_HEX__
#define __SEVEN_SEGMENT_HEX__

#define HEX3_HEX0	(*((volatile int*) 0x10000020))
#define HEX3_HEX0_PTR	(volatile int*) 0x10000020
#define HEX7_HEX4	(*((volatile int*) 0x10000030))
#define HEX7_HEX4_PTR	(volatile int*) 0x10000020
#define NUMBER_OF_SEVEN_SEGMENT_DISPLAYS 8

typedef enum {HEX_0 = 0x3F, HEX_1 = 0x06, HEX_2 = 0x5B,HEX_3 = 0x4F, HEX_4 = 0x66, HEX_5 = 0x6D, HEX_6 = 0x7D, HEX_7 = 0x07, HEX_8 = 0x7F,
	      HEX_9 = 0x6F, HEX_A = 0x77, HEX_B = 0x7C, HEX_C = 0x39, HEX_D = 0x5E, HEX_E = 0x79, HEX_F = 0x71} hex_val_t;

// Display a hex value on one of the seven segment displays
// Pre: hex_to_display=hex_val_t to display between 0 and F
//      seven_segment=display on FPGA from 0 to 7 to display hex_to_display
// Post: hex_to_display displayed on seven_segment on FPGA
// Return: Nothing
void display_hex_on_seven_segment (hex_val_t hex, int seven_segment);

hex_val_t get_display_from_hex (int hex);

// Displays a decimal number on the DE2 HEX displays
// If overflow (number > 99999999), number displays 99999999
// Pre: number = number to display as a decimal
//      fill_zeros = bool cast integer whether to fill unused displays with zeroes
// Post: number is displayed on the seven segment displays
// Return: Nothing
void display_a_decimal_number_on_seven_segment (int number, int fill_zeros);

// Displays a decimal number on the DE2 HEX displays
// starting on any HEX display
// If overflow (number > 99999999), number displays 99999999, or however many 9s
// fit into the display
// Pre: number = number to display as a decimal
//      fill_zeros = bool cast integer whether to fill unused displays with zeroes
//      display_to_start_on = int representing which HEX display to start on (valid range is 0-7 inclusive)
// Post: number is displayed on the seven segment displays
// Return: Nothing
void display_a_decimal_number_starting_on_any_seven_segment (int number, int fill_zeros, int display_to_start_on);

// Writes nothhing to all displays starting at a certain hex display
// Post: nothing is displayed on the seven segment displays
// Return: Nothing
void explode_seven_segment (void);

#endif
