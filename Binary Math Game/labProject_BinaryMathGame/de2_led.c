// Functions for controlling the LEDs on the DE2 board

#include "de2_led.h"

// Pre: set_value = int (preferrably hex) value to set the
//      red LEDs to (in a hex boolean-esque fashion)
void set_ledr (int set_value) {
	*(LEDR_PTR) = set_value;
}

// Pre: set_value = int (preferrably hex) value to set the
//      green LEDs to (in a hex boolean-esque fashion)
void set_ledg (int set_value) {
	*(LEDG_PTR) = set_value;
}

// Pre: bit = int bit (valid [17:0]) to set
//      in the LEDR
void set_ledr_bit (int bit) {
	if (bit > 17) return;
	*(LEDR_PTR) |= (0x1 << bit);
}

// Pre: bit = int bit (valid [8:0]) to set
//      in the LEDG
void set_ledg_bit (int bit) {
	if (bit > 8) return;
	*(LEDG_PTR) |= (0x1 << bit);
}

// Pre: bit = int bit (valid [17:0]) to clear
//      in the LEDR
void clear_ledr_bit (int bit) {
	if (bit > 17) return;
	*(LEDR_PTR) &= ~(0x1 << bit);
}

// Pre: bit = int bit (valid [8:0]) to clear
//      on in the LEDG
void clear_ledg_bit (int bit) {
	if (bit > 8) return;
	*(LEDG_PTR) &= ~(0x1 << bit);
}

// Pre: bit = int bit (valid [17:0]) to toggle
//      in the LEDR
void toggle_ledr_bit (int bit) {
	if (bit > 17) return;
	*(LEDR_PTR) ^= (0x1 << bit);
}

// Pre: bit = int bit (valid [8:0]) to toggle
//      on in the LEDG
void toggle_ledg_bit (int bit) {
	if (bit > 8) return;
	*(LEDG_PTR) ^= (0x1 << bit);
}

// Pre: bit = int bit (valid [17:0]) to test whether it is
//      on in the LEDR
// Return: int-cast bool regarding whether the particular
// LEDR is set; iff it is, returns >0; returns -1 if bit is
// invalid
int is_ledr_set (int bit) {
	if (bit > 17) return 0;
	return LEDR&(0x1 << bit);
}

// Pre: bit = int bit (valid [8:0]) to test whether it is
//      on in the LEDG
// Return: int-cast bool regarding whether the particular
// LEDG is set; iff it is, returns >0; returns -1 if bit is
// invalid
int is_ledg_set (int bit) {
	if (bit > 8) return 0;
	return LEDG&(0x1 << bit);
}
