// C functions that take data from switches

#include "de2_sw.h"

// Get a certain number of bits starting from a certain point
// represented by switches on the FPGA.
// Reads right to left EG: 7:4 for values on sw 4 to 7, param are 4,4
// Pre: num_bits_to_get = int number of bits wanted from start point
//      start_sw_point = int start point
// Post: Find information on state of selected switches
// Return: Value of selected switches
int get_hex_value_from_switches (int num_bits_to_get, int start_sw_point) {
	return (SW_SWITCH >> start_sw_point) & ((1 << num_bits_to_get)-1);
}

// Gets the value of only one switch
// Pre: sw = int switch to get values from (valid range 0-17)
// Post: Find information on state of selected switch
// Return: Value of selected switch
int get_value_of_switch (int sw) {
	return get_hex_value_from_switches(1, sw);
}

// Gets the value of all the switches
// Return: Value (bin) represented by all switches 
int get_value_of_all_switches (void) {
	return get_hex_value_from_switches(18,0);
}
