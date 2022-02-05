// Header file for functions outlined in 
// de2_led.c

#ifndef __DE2_LED__
#define __DE2_LED__

#define LEDR	(*((volatile int*) 0x10000000))
#define LEDG	(*((volatile int*) 0x10000010))

#define LEDR_PTR	(int*) 0x10000000
#define LEDG_PTR	(int*) 0x10000010

// Pre: set_value = int (preferrably hex) value to set the
//      red LEDs to (in a hex boolean-esque fashion)
void set_ledr (int set_value);

// Pre: set_value = int (preferrably hex) value to set the
//      green LEDs to (in a hex boolean-esque fashion)
void set_ledg (int set_value);

// Pre: bit = int bit (valid [17:0]) to set
//      in the LEDR
void set_ledr_bit (int bit);

// Pre: bit = int bit (valid [8:0]) to set
//      in the LEDG
void set_ledg_bit (int bit);

// Pre: bit = int bit (valid [17:0]) to clear
//      in the LEDR
void clear_ledr_bit (int bit);

// Pre: bit = int bit (valid [8:0]) to clear
//      on in the LEDG
void clear_ledg_bit (int bit);

// Pre: bit = int bit (valid [17:0]) to toggle
//      in the LEDR
void toggle_ledr_bit (int bit);

// Pre: bit = int bit (valid [8:0]) to toggle
//      on in the LEDG
void toggle_ledg_bit (int bit);

// Pre: bit = int bit (valid [17:0]) to test whether it is
//      on in the LEDR
// Return: int-cast bool regarding whether the particular
// LEDR is set; iff it is, returns >0; returns -1 if bit is
// invalid
int is_ledr_set (int bit);

// Pre: bit = int bit (valid [8:0]) to test whether it is
//      on in the LEDG
// Return: int-cast bool regarding whether the particular
// LEDG is set; iff it is, returns >0; returns -1 if bit is
// invalid
int is_ledg_set (int bit);

#endif
