// C functions that define the chalkboard graphic

#include "de2_vga.h"
#include "de2_chalkboard.h"


// Background color RGB888: 0x51AE6C
// Background color RGB565: 0x556D
// Wooden frame color RGB888: 0x8B7265
// Wooden frame color RGB565: 0x8B8C
// Wooden frame shaded color RGB888: 0x67544B
// Wooden frame shaded color RGB565: 0x62A9
// Chalk color RGB888: 0xFFFFFF
// Chalk color RGB565: 0xFFFF
// Eraser color RGB888: 0x363636
// Eraser color RGB565: 0x31A6


void chalkboard(void)
{
	// Rendering the chalkboard

// Render Wooden Frame
VGA_box(CXCoord + 4, CYCoord, CXCoord + 255, CYCoord + 3, 0x8B8C);
VGA_box(CXCoord + 8, CYCoord + 4, CXCoord + 251, CYCoord + 7, 0x8B8C);
VGA_box(CXCoord + 12, CYCoord + 8, CXCoord + 247, CYCoord + 11, 0x8B8C);
VGA_box(CXCoord + 16, CYCoord + 12, CXCoord + 243, CYCoord + 15, 0x8B8C);
VGA_box(CXCoord + 244, CYCoord + 16, CXCoord + 247, CYCoord + 131, 0x8B8C);
VGA_box(CXCoord + 248, CYCoord + 12, CXCoord + 251, CYCoord + 135, 0x8B8C);
VGA_box(CXCoord + 252, CYCoord + 8, CXCoord + 255, CYCoord + 139, 0x8B8C);
VGA_box(CXCoord + 256, CYCoord + 4, CXCoord + 259, CYCoord + 11, 0x8B8C);
VGA_box(CXCoord + 256, CYCoord + 136, CXCoord + 259, CYCoord + 143, 0x8B8C);
VGA_box(CXCoord + 12, CYCoord + 136, CXCoord + 247, CYCoord + 139, 0x8B8C);
VGA_box(CXCoord + 8, CYCoord + 140, CXCoord + 251, CYCoord + 143, 0x8B8C);
VGA_box(CXCoord + 4, CYCoord + 144, CXCoord + 11, CYCoord + 147, 0x8B8C);
VGA_box(CXCoord + 248, CYCoord + 144, CXCoord + 255, CYCoord + 147, 0x8B8C);
VGA_box(CXCoord + 12, CYCoord + 16, CXCoord + 15, CYCoord + 131, 0x8B8C);
VGA_box(CXCoord + 8, CYCoord + 12, CXCoord + 11, CYCoord + 135, 0x8B8C);
VGA_box(CXCoord + 4, CYCoord + 8, CXCoord + 7, CYCoord + 139, 0x8B8C);
VGA_box(CXCoord, CYCoord + 4, CXCoord + 3, CYCoord + 11, 0x8B8C);
VGA_box(CXCoord, CYCoord + 136, CXCoord + 3, CYCoord + 143, 0x8B8C);

// Render Wooden Frame Shaded
VGA_box(CXCoord, CYCoord, CXCoord + 3, CYCoord + 3, 0x62A9);
VGA_box(CXCoord + 4, CYCoord + 4, CXCoord + 7, CYCoord + 7, 0x62A9);
VGA_box(CXCoord + 8, CYCoord + 8, CXCoord + 11, CYCoord + 11, 0x62A9);
VGA_box(CXCoord + 12, CYCoord + 12, CXCoord + 15, CYCoord + 15, 0x62A9);
VGA_box(CXCoord + 244, CYCoord + 12, CXCoord + 247, CYCoord + 15, 0x62A9);
VGA_box(CXCoord + 248, CYCoord + 8, CXCoord + 251, CYCoord + 11, 0x62A9);
VGA_box(CXCoord + 252, CYCoord + 4, CXCoord + 255, CYCoord + 7, 0x62A9);
VGA_box(CXCoord + 256, CYCoord, CXCoord + 259, CYCoord + 3, 0x62A9);
VGA_box(CXCoord + 256, CYCoord + 12, CXCoord + 259, CYCoord + 135, 0x62A9);
VGA_box(CXCoord, CYCoord + 144, CXCoord + 3, CYCoord + 147, 0x62A9);
VGA_box(CXCoord + 4, CYCoord + 140, CXCoord + 7, CYCoord + 143, 0x62A9);
VGA_box(CXCoord + 8, CYCoord + 136, CXCoord + 11, CYCoord + 139, 0x62A9);
VGA_box(CXCoord + 12, CYCoord + 132, CXCoord + 23, CYCoord + 135, 0x62A9);
VGA_box(CXCoord + 48, CYCoord + 132, CXCoord + 75, CYCoord + 135, 0x62A9);
VGA_box(CXCoord + 88, CYCoord + 132, CXCoord + 103, CYCoord + 135, 0x62A9);
VGA_box(CXCoord + 124, CYCoord + 132, CXCoord + 247, CYCoord + 135, 0x62A9);
VGA_box(CXCoord + 248, CYCoord + 136, CXCoord + 251, CYCoord + 139, 0x62A9);
VGA_box(CXCoord + 252, CYCoord + 140, CXCoord + 255, CYCoord + 143, 0x62A9);
VGA_box(CXCoord + 256, CYCoord + 144, CXCoord + 259, CYCoord + 147, 0x62A9);
VGA_box(CXCoord + 12, CYCoord + 144, CXCoord + 247, CYCoord + 147, 0x62A9);
VGA_box(CXCoord, CYCoord + 12, CXCoord + 3, CYCoord + 135, 0x62A9);

// Render Chalk
VGA_box(CXCoord + 24, CYCoord + 132, CXCoord + 47, CYCoord + 135, 0xFFFF);
VGA_box(CXCoord + 76, CYCoord + 132, CXCoord + 87, CYCoord + 135, 0xFFFF);

// Render Eraser
VGA_box(CXCoord + 104, CYCoord + 128, CXCoord + 123, CYCoord + 135, 0x31A6);

// Render Background
VGA_box(CXCoord + 16, CYCoord + 16, CXCoord + 243, CYCoord + 127, 0x556D);
VGA_box(CXCoord + 16, CYCoord + 128, CXCoord + 103, CYCoord + 131, 0x556D);
VGA_box(CXCoord + 124, CYCoord + 128, CXCoord + 243, CYCoord + 131, 0x556D);
}
