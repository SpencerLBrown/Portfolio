// Header file for functions outlined in de2_sw.c

#ifndef __DE2_SWITCH__
#define __DE2_SWITCH__

#define SW_SWITCH	(*((volatile int*) 0x10000040))
#define SW_SWITCH_PTR	(volatile int*) 0x10000040

// Get a certain number of bits starting from a certain point
// represented by switches on the FPGA.
// Reads right to left EG: 7:4 for values on sw 4 to 7, param are 4,4
// Pre: num_bits_to_get = int number of bits wanted from start point
//      start_sw_point = int start point
// Post: Find information on state of selected switches
// Return: Value of selected switches
int get_hex_value_from_switches (int num_bits_to_get, int start_sw_point);

// Gets the value of only one switch
// Pre: sw = int switch to get values from (valid range 0-17)
// Post: Find information on state of selected switch
// Return: Value of selected switch
int get_value_of_switch (int sw);

// Gets the value of all the switches
// Return: Value (bin) represented by all switches 
int get_value_of_all_switches (void);

#endif
