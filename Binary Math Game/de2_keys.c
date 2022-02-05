// C code for keys

#include "nios2_ctrl_reg_macros.h"
#include "de2_keys.h"

// Detects whether a key has been pressed. Returns int cast boolean.
int key_is_pressed (de2key_t key) {
	return KEYS&key;
}

void wait_for_key_depress (de2key_t key) {
	while (KEYS&key);
}

void enable_key_interrupts (void) {
	// write to the pushbutton interrupt mask register,
	// and set 3 mask bits to 1 (bit 0 is Nios II reset) 
	*(KEY_PTR+2) = 0xE; 
	// set interrupt mask bits for level 2 (pushbuttons)
	//NIOS2_WRITE_IENABLE( 0x2 );
}

int interrupt_key_is_pressed (de2key_t key) {
	return *(KEY_PTR + 3) & key;
}

void clear_key_interrupt (void) {
	*(KEY_PTR + 3) = 0;
}

// Pre: key = key_t to determine whether it has
// been pressed according to the edgecapture register
// Return: int-cast boolean over whether 
// particular key in edgecapture register has
// been pressed
int edgecapture_key_is_pressed (de2key_t key) {
	return KEYS_EDGECAPTURE&key;
}

// Return: int-cast boolean over whether 
// any key in edgecapture register has
// been pressed
int edgecapture_any_key_is_pressed (void) {
	return (KEYS_EDGECAPTURE&KEY1) || (KEYS_EDGECAPTURE&KEY2) || (KEYS_EDGECAPTURE&KEY3);
}

// Clear edgecapture register
void clear_edgecapture_register (void) {
	*(KEYS_EDGECAPTURE_PTR) = 0;
}
