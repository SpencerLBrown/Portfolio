#include "de2_vga.h"

void VGA_box(int x1, int y1, int x2, int y2, short pixel_color)
{
	int offset, row, col;
	volatile short * pixel_buffer = (short*) 0x08000000; // VGA pixel buffer

	/* assume that the box coordinates are valid */
	for (row = y1; row <= y2; row++)
	{
		col = x1;
		while (col <= x2)
		{
			offset = (row << 9) + col;
			*(pixel_buffer + offset) = pixel_color;	// compute halfword address, set pixel
			++col;
		}
	}
}

void VGA_text(int x, int y, char * text_ptr)
{
	int offset;
	volatile char * character_buffer = (char *) 0x09000000; // VGA character buffer

	/* assume that the text string fits on one line */
	offset = (y << 7) + x;
	while ( *(text_ptr) )
	{
		*(character_buffer + offset) = *(text_ptr);	// write to the character buffer
		++text_ptr;
		++offset;
	}
}