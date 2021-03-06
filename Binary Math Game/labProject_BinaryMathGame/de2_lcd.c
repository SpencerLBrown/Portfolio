#include "de2_lcd.h"

/****************************************************************************************
 * Subroutine to move the LCD cursor
****************************************************************************************/
void LCD_cursor(int x, int y)
{
  	volatile char * LCD_display_ptr = (char *) 0x10003050;	// 16x2 character display
	char instruction;

	instruction = x;
	if (y != 0) instruction |= 0x40;				// set bit 6 for bottom row
	instruction |= 0x80;								// need to set bit 7 to set the cursor location
	*(LCD_display_ptr) = instruction;			// write to the LCD instruction register
}

/****************************************************************************************
 * Subroutine to send a string of text to the LCD
****************************************************************************************/
void LCD_text(char * text_ptr)
{
  	volatile char * LCD_display_ptr = (char *) 0x10003050;	// 16x2 character display

  	while ( *(text_ptr) )
  	{

  		*(LCD_display_ptr + 1) = *(text_ptr);	// write to the LCD data register
  		++text_ptr;

  	}
}

/****************************************************************************************
 * Subroutine to turn off the LCD cursor
****************************************************************************************/
void LCD_cursor_off(void)
{
  	volatile char * LCD_display_ptr = (char *) 0x10003050;	// 16x2 character display
	*(LCD_display_ptr) = 0x0C;		// instruction: 0 000100									// turn off the LCD cursor
}

/****************************************************************************************
 * Subroutine to clear the LCD cursor
****************************************************************************************/
void LCD_clear(void)
{
  	volatile char * LCD_display_ptr = (char *) 0x10003050;	// 16x2 character display
	*(LCD_display_ptr) = 0x01;											// clear the LCD
}
