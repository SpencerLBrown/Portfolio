// Header file for operations relating to the keys

#ifndef __KEYS__
#define __KEYS__

#define KEYS 					(*((volatile int*) 0x10000050))
#define KEYS_EDGECAPTURE 		(*((volatile int*) 0x1000005C))

#define KEY_PTR					(int*) 0x10000050
#define KEYS_EDGECAPTURE_PTR	(int*) 0x1000005C

typedef enum {KEY0 = 0x01, KEY1 = 0x02, KEY2 = 0x04, KEY3 = 0x08} de2key_t;

int key_is_pressed (de2key_t key);

void wait_for_key_depress (de2key_t key);

void enable_key_interrupts (void);

int interrupt_key_is_pressed (de2key_t key);

void clear_key_interrupt (void);

int edgecapture_key_is_pressed (de2key_t key);

int edgecapture_any_key_is_pressed (void);

void clear_edgecapture_register (void);

#endif
