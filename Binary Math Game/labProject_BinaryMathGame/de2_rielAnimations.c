// C functions that define Riel's animations

#include "de2_vga.h"
#include "de2_rielAnimations.h"


// Skin color RGB888: 0xF7DBD2
// Skin color RGB565: 0xF6DA
// Shirt color RGB888: 0x22B14C
// Skin color RGB888: 0xE4B8A5
// Skin color RGB565: 0xE5D4
// Shirt color RGB888: 0xEF48CC
// Shirt color RGB565: 0x3A59
// Hair color RGB888: 0x000000
// Hair color RGB565: 0x0000
// Mouth color RGB888: 0x000000
// Mouth color RGB565: 0x0000
// Tongue color RGB888: 0xFFAEC9
// Tongue color RGB565: 0xFD79
// Teeth color RGB888: 0xFFFFFF
// Teeth color RGB565: 0xFFFF
// Star color RGB888: 0xFFF200
// Star color RGB565: 0xFF80
// Red X color RGB888: 0xED1C24
// Red X color RGB565: 0xE8E4
// Blue ! color RGB888: 0xEF48CC
// Blue ! color RGB565: 0x3A59
// Sweat color RGB888: 0x99D9EA
// Sweat color RGB565: 0x9EDD

void rielBGReset(void) {
	VGA_box(RXCoord, RYCoord, RXCoord + 31, RYCoord + 52, 0xFFFF);
}


void rielNeutralPose1(void)
{
// Render Start – Riel Neutral Pose (R1.png)

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 23, RXCoord + 12, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 22, RXCoord + 23, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 24, RYCoord + 23, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 25, RXCoord + 11, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 25, RXCoord + 23, RYCoord + 28, 0x0000);

// Render Mouth
VGA_box(RXCoord + 11, RYCoord + 32, RXCoord + 20, RYCoord + 32, 0x0000);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 7, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 6, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 22, RXCoord + 18, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 7, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 25, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 25, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 10, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 32, RXCoord + 27, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielNeutralPose2(void)
{
// Render Start – Riel Neutral Pose (R2.png)

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 10, RXCoord + 11, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 10, RXCoord + 25, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 11, RXCoord + 12, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 11, RXCoord + 26, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 12, RXCoord + 27, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 13, RXCoord + 28, RYCoord + 13, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 14, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 29, RYCoord + 16, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 5, RYCoord + 18, 0x0000);
VGA_box(RXCoord, RYCoord + 19, RXCoord + 4, RYCoord + 20, 0x0000);
VGA_box(RXCoord, RYCoord + 21, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 29, RXCoord + 3, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 30, RXCoord + 4, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 31, RXCoord + 4, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 18, RXCoord + 30, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 19, RXCoord + 30, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 21, RXCoord + 30, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 29, RXCoord + 29, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 28, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 31, RXCoord + 27, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 9, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 12, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 18, RXCoord + 17, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 7, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 19, RXCoord + 11, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 19, RXCoord + 16, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 19, RXCoord + 22, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 24, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 20, RXCoord + 6, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 20, RXCoord + 23, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 23, RXCoord + 12, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 24, RXCoord + 12, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 23, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 24, RXCoord + 24, RYCoord + 24, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 26, RXCoord + 11, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 26, RXCoord + 23, RYCoord + 29, 0x0000);

// Render Mouth
VGA_box(RXCoord + 11, RYCoord + 33, RXCoord + 20, RYCoord + 33, 0x0000);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 18, RXCoord + 14, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 18, RXCoord + 19, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 25, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 6, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 19, RXCoord + 10, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 19, RXCoord + 15, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 19, RXCoord + 20, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 21, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 20, RXCoord + 26, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 5, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 7, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 6, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 23, RXCoord + 18, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 27, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 7, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 26, RXCoord + 19, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 26, RXCoord + 27, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 30, RXCoord + 26, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 10, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 34, RXCoord + 27, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 35, RXCoord + 26, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 37, RXCoord + 25, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 38, RXCoord + 24, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 39, RXCoord + 23, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 40, RXCoord + 22, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 41, RXCoord + 21, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 42, RXCoord + 19, RYCoord + 42, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 43, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielWinPose1(void)
{
// Render Start – Riel Win Pose (R3.png)

// Render Star
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 1, RYCoord + 3, 0xFF80);
VGA_box(RXCoord + 2, RYCoord + 1, RXCoord + 2, RYCoord + 4, 0xFF80);
VGA_box(RXCoord + 3, RYCoord + 2, RXCoord + 3, RYCoord + 3, 0xFF80);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 21, RXCoord + 12, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 22, RXCoord + 23, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 24, RYCoord + 23, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 25, RXCoord + 11, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 25, RXCoord + 23, RYCoord + 28, 0x0000);

// Render Mouth
VGA_box(RXCoord + 8, RYCoord + 32, RXCoord + 23, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 33, RXCoord + 9, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 33, RXCoord + 22, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 34, RXCoord + 21, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 35, RXCoord + 11, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 35, RXCoord + 20, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 36, RXCoord + 19, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 33, RXCoord + 21, RYCoord + 33, 0xFFFF);
VGA_box(RXCoord + 12, RYCoord + 35, RXCoord + 19, RYCoord + 35, 0xFFFF);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 7, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 6, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 22, RXCoord + 18, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 18, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 7, RYCoord + 27, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 28, RXCoord + 11, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 25, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 25, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 7, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 32, RXCoord + 27, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 8, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 9, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 34, RXCoord + 26, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 9, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 34, RXCoord + 26, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 35, RXCoord + 10, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 35, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 11, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 20, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielWinPose2(void)
{
// Render Start – Riel Win Pose (R4.png)

// Render Star
VGA_box(RXCoord, RYCoord + 2, RXCoord, RYCoord + 2, 0xFF80);
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 1, RYCoord + 5, 0xFF80);
VGA_box(RXCoord + 2, RYCoord, RXCoord + 2, RYCoord + 4, 0xFF80);
VGA_box(RXCoord + 3, RYCoord + 2, RXCoord + 3, RYCoord + 5, 0xFF80);
VGA_box(RXCoord + 4, RYCoord + 2, RXCoord + 4, RYCoord + 2, 0xFF80);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 20, RXCoord + 11, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 21, RXCoord + 12, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 22, RXCoord + 8, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 22, RXCoord + 23, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 24, RYCoord + 23, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 26, RXCoord + 11, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 25, RXCoord + 23, RYCoord + 28, 0x0000);

// Render Mouth
VGA_box(RXCoord + 8, RYCoord + 32, RXCoord + 23, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 33, RXCoord + 9, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 33, RXCoord + 22, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 34, RXCoord + 10, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 34, RXCoord + 21, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 35, RXCoord + 20, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 36, RXCoord + 12, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 36, RXCoord + 19, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 13, RYCoord + 37, RXCoord + 18, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 33, RXCoord + 21, RYCoord + 33, 0xFFFF);
VGA_box(RXCoord + 11, RYCoord + 34, RXCoord + 20, RYCoord + 34, 0xFFFF);
VGA_box(RXCoord + 13, RYCoord + 36, RXCoord + 18, RYCoord + 36, 0xFFFF);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 8, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 7, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 6, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 22, RXCoord + 10, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 22, RXCoord + 18, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 18, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 11, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 7, RYCoord + 27, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 28, RXCoord + 11, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 25, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 25, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 7, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 32, RXCoord + 27, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 8, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 9, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 34, RXCoord + 26, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 35, RXCoord + 10, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 35, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 11, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 20, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 12, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 19, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielWinPose3(void)
{
// Render Start – Riel Win Pose (R5.png)

// Render Star
VGA_box(RXCoord, RYCoord + 2, RXCoord, RYCoord + 2, 0xFF80);
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 1, RYCoord + 5, 0xFF80);
VGA_box(RXCoord + 2, RYCoord, RXCoord + 2, RYCoord + 4, 0xFF80);
VGA_box(RXCoord + 3, RYCoord + 2, RXCoord + 3, RYCoord + 5, 0xFF80);
VGA_box(RXCoord + 4, RYCoord + 2, RXCoord + 4, RYCoord + 2, 0xFF80);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 10, RXCoord + 11, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 10, RXCoord + 25, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 11, RXCoord + 12, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 11, RXCoord + 26, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 12, RXCoord + 27, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 13, RXCoord + 28, RYCoord + 13, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 14, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 29, RYCoord + 16, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 5, RYCoord + 18, 0x0000);
VGA_box(RXCoord, RYCoord + 19, RXCoord + 4, RYCoord + 20, 0x0000);
VGA_box(RXCoord, RYCoord + 21, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 29, RXCoord + 3, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 30, RXCoord + 4, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 31, RXCoord + 4, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 18, RXCoord + 30, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 19, RXCoord + 30, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 21, RXCoord + 30, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 29, RXCoord + 29, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 28, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 31, RXCoord + 27, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 9, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 12, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 18, RXCoord + 17, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 7, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 19, RXCoord + 11, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 19, RXCoord + 16, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 19, RXCoord + 22, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 24, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 20, RXCoord + 6, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 20, RXCoord + 23, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 21, RXCoord + 11, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 23, RXCoord + 8, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 23, RXCoord + 12, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 23, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 24, RXCoord + 24, RYCoord + 24, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 27, RXCoord + 11, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 26, RXCoord + 23, RYCoord + 29, 0x0000);

// Render Mouth
VGA_box(RXCoord + 8, RYCoord + 33, RXCoord + 23, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 34, RXCoord + 9, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 34, RXCoord + 22, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 35, RXCoord + 10, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 35, RXCoord + 21, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 36, RXCoord + 20, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 37, RXCoord + 12, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 37, RXCoord + 19, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 13, RYCoord + 38, RXCoord + 18, RYCoord + 38, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 34, RXCoord + 21, RYCoord + 34, 0xFFFF);
VGA_box(RXCoord + 11, RYCoord + 35, RXCoord + 20, RYCoord + 35, 0xFFFF);
VGA_box(RXCoord + 13, RYCoord + 37, RXCoord + 18, RYCoord + 37, 0xFFFF);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 18, RXCoord + 14, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 18, RXCoord + 19, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 25, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 6, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 19, RXCoord + 10, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 19, RXCoord + 15, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 19, RXCoord + 20, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 21, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 20, RXCoord + 26, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 8, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 7, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 6, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 23, RXCoord + 10, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 23, RXCoord + 18, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 18, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 27, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 11, RYCoord + 26, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 27, RXCoord + 7, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 29, RXCoord + 11, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 26, RXCoord + 19, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 26, RXCoord + 27, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 30, RXCoord + 26, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 7, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 34, RXCoord + 8, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 34, RXCoord + 27, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 35, RXCoord + 9, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 35, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 36, RXCoord + 10, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 36, RXCoord + 26, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 37, RXCoord + 11, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 20, RYCoord + 37, RXCoord + 25, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 38, RXCoord + 12, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 19, RYCoord + 38, RXCoord + 24, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 39, RXCoord + 23, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 40, RXCoord + 22, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 41, RXCoord + 21, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 42, RXCoord + 19, RYCoord + 42, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 43, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielLosePose1(void)
{
// Render Start – Riel Lose Pose (R6.png)

// Render Red X
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 1, RYCoord + 2, 0xE8E4);
VGA_box(RXCoord + 1, RYCoord + 5, RXCoord + 1, RYCoord + 5, 0xE8E4);
VGA_box(RXCoord + 2, RYCoord + 3, RXCoord + 3, RYCoord + 4, 0xE8E4);
VGA_box(RXCoord + 4, RYCoord + 2, RXCoord + 4, RYCoord + 2, 0xE8E4);
VGA_box(RXCoord + 4, RYCoord + 5, RXCoord + 4, RYCoord + 5, 0xE8E4);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 24, RXCoord + 12, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 23, RXCoord + 12, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 24, RXCoord + 23, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 24, RYCoord + 23, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 26, RXCoord + 11, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 26, RXCoord + 23, RYCoord + 28, 0x0000);

// Render Mouth
VGA_box(RXCoord + 11, RYCoord + 33, RXCoord + 11, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 32, RXCoord + 12, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 13, RYCoord + 31, RXCoord + 18, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 32, RXCoord + 19, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 33, RXCoord + 20, RYCoord + 33, 0x0000);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 6, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 7, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 23, RXCoord + 18, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 27, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 7, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 26, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 26, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 26, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 31, RXCoord + 12, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 19, RYCoord + 31, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 11, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 32, RXCoord + 18, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 20, RYCoord + 32, RXCoord + 27, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 10, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 33, RXCoord + 19, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielLosePose2(void)
{
// Render Start – Riel Lose Pose (R7.png)

// Render Red X
VGA_box(RXCoord, RYCoord + 1, RXCoord, RYCoord + 1, 0xE8E4);
VGA_box(RXCoord, RYCoord + 6, RXCoord, RYCoord + 6, 0xE8E4);
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 1, RYCoord + 2, 0xE8E4);
VGA_box(RXCoord + 1, RYCoord + 5, RXCoord + 1, RYCoord + 5, 0xE8E4);
VGA_box(RXCoord + 2, RYCoord + 3, RXCoord + 3, RYCoord + 4, 0xE8E4);
VGA_box(RXCoord + 4, RYCoord + 2, RXCoord + 4, RYCoord + 2, 0xE8E4);
VGA_box(RXCoord + 4, RYCoord + 5, RXCoord + 4, RYCoord + 5, 0xE8E4);
VGA_box(RXCoord + 5, RYCoord + 1, RXCoord + 5, RYCoord + 1, 0xE8E4);
VGA_box(RXCoord + 5, RYCoord + 6, RXCoord + 5, RYCoord + 6, 0XE8E4);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 24, RXCoord + 12, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 23, RXCoord + 12, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 22, RXCoord + 10, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 24, RXCoord + 22, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 24, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 22, RXCoord + 23, RYCoord + 22, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 26, RXCoord + 11, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 26, RXCoord + 23, RYCoord + 28, 0x0000);

// Render Mouth
VGA_box(RXCoord + 12, RYCoord + 33, RXCoord + 12, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 32, RXCoord + 12, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 13, RYCoord + 31, RXCoord + 13, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 30, RXCoord + 17, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 18, RYCoord + 31, RXCoord + 18, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 32, RXCoord + 19, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 33, RXCoord + 19, RYCoord + 33, 0x0000);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 7, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 22, RXCoord + 20, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 6, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 8, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 23, RXCoord + 18, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 27, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 7, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 26, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 26, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 26, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 30, RXCoord + 13, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 30, RXCoord + 26, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 31, RXCoord + 12, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 31, RXCoord + 17, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 19, RYCoord + 31, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 11, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 32, RXCoord + 18, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 20, RYCoord + 32, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielLosePose3(void)
{
// Render Start – Riel Lose Pose (R8.png)

// Render Red X
VGA_box(RXCoord, RYCoord + 1, RXCoord, RYCoord + 1, 0xE8E4);
VGA_box(RXCoord, RYCoord + 6, RXCoord, RYCoord + 6, 0xE8E4);
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 1, RYCoord + 2, 0xE8E4);
VGA_box(RXCoord + 1, RYCoord + 5, RXCoord + 1, RYCoord + 5, 0xE8E4);
VGA_box(RXCoord + 2, RYCoord + 3, RXCoord + 3, RYCoord + 4, 0xE8E4);
VGA_box(RXCoord + 4, RYCoord + 2, RXCoord + 4, RYCoord + 2, 0xE8E4);
VGA_box(RXCoord + 4, RYCoord + 5, RXCoord + 4, RYCoord + 5, 0xE8E4);
VGA_box(RXCoord + 5, RYCoord + 1, RXCoord + 5, RYCoord + 1, 0xE8E4);
VGA_box(RXCoord + 5, RYCoord + 6, RXCoord + 5, RYCoord + 6, 0XE8E4);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 10, RXCoord + 11, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 10, RXCoord + 25, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 11, RXCoord + 12, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 11, RXCoord + 26, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 12, RXCoord + 27, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 13, RXCoord + 28, RYCoord + 13, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 14, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 29, RYCoord + 16, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 5, RYCoord + 18, 0x0000);
VGA_box(RXCoord, RYCoord + 19, RXCoord + 4, RYCoord + 20, 0x0000);
VGA_box(RXCoord, RYCoord + 21, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 29, RXCoord + 3, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 30, RXCoord + 4, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 31, RXCoord + 4, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 18, RXCoord + 30, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 19, RXCoord + 30, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 21, RXCoord + 30, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 29, RXCoord + 29, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 28, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 31, RXCoord + 27, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 9, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 12, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 18, RXCoord + 17, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 7, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 19, RXCoord + 11, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 19, RXCoord + 16, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 19, RXCoord + 22, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 24, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 20, RXCoord + 6, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 20, RXCoord + 23, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 25, RXCoord + 12, RYCoord + 25, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 24, RXCoord + 12, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 23, RXCoord + 10, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 25, RXCoord + 22, RYCoord + 25, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 24, RXCoord + 24, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 23, RXCoord + 23, RYCoord + 23, 0x0000);

// Render Eyes
VGA_box(RXCoord + 8, RYCoord + 27, RXCoord + 11, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 27, RXCoord + 23, RYCoord + 29, 0x0000);

// Render Mouth
VGA_box(RXCoord + 12, RYCoord + 34, RXCoord + 12, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 33, RXCoord + 12, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 13, RYCoord + 32, RXCoord + 13, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 31, RXCoord + 17, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 18, RYCoord + 32, RXCoord + 18, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 33, RXCoord + 19, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 34, RXCoord + 19, RYCoord + 34, 0x0000);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 18, RXCoord + 14, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 18, RXCoord + 19, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 25, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 6, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 19, RXCoord + 10, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 19, RXCoord + 15, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 19, RXCoord + 20, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 21, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 20, RXCoord + 26, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 5, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 7, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 23, RXCoord + 20, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 6, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 8, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 25, RXCoord + 27, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 24, RXCoord + 18, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 27, RYCoord + 26, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 27, RXCoord + 7, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 27, RXCoord + 19, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 27, RXCoord + 27, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 30, RXCoord + 26, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 31, RXCoord + 13, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 31, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 32, RXCoord + 12, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 32, RXCoord + 17, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 19, RYCoord + 32, RXCoord + 26, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 11, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 33, RXCoord + 18, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 20, RYCoord + 33, RXCoord + 27, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 35, RXCoord + 26, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 37, RXCoord + 25, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 38, RXCoord + 24, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 39, RXCoord + 23, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 40, RXCoord + 22, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 41, RXCoord + 21, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 42, RXCoord + 19, RYCoord + 42, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 43, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielTimeRunningOutPose1(void)
{
// Render Start – Riel Time Running Out Pose (R9.png)

// Render Exclamation Mark
VGA_box(RXCoord + 1, RYCoord + 1, RXCoord + 3, RYCoord + 2, 0x3A59);
VGA_box(RXCoord + 2, RYCoord + 3, RXCoord + 2, RYCoord + 3, 0x3A59);

// Render Sweat
VGA_box(RXCoord + 24, RYCoord + 5, RXCoord + 24, RYCoord + 5, 0x9EDD);
VGA_box(RXCoord + 25, RYCoord + 4, RXCoord + 25, RYCoord + 4, 0x9EDD);
VGA_box(RXCoord + 25, RYCoord + 6, RXCoord + 25, RYCoord + 6, 0x9EDD);
VGA_box(RXCoord + 26, RYCoord + 5, RXCoord + 26, RYCoord + 5, 0x9EDD);
VGA_box(RXCoord + 29, RYCoord + 8, RXCoord + 29, RYCoord + 8, 0x9EDD);
VGA_box(RXCoord + 30, RYCoord + 7, RXCoord + 30, RYCoord + 7, 0x9EDD);
VGA_box(RXCoord + 30, RYCoord + 9, RXCoord + 30, RYCoord + 9, 0x9EDD);
VGA_box(RXCoord + 31, RYCoord + 8, RXCoord + 31, RYCoord + 8, 0x9EDD);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 21, RXCoord + 12, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 21, RXCoord + 23, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 22, RXCoord + 24, RYCoord + 22, 0x0000);

// Render Eyes
VGA_box(RXCoord + 9, RYCoord + 24, RXCoord + 10, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 25, RXCoord + 11, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 24, RXCoord + 22, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 25, RXCoord + 23, RYCoord + 28, 0x0000);

// Render Mouth
VGA_box(RXCoord + 9, RYCoord + 32, RXCoord + 22, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 33, RXCoord + 8, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 23, RYCoord + 33, RXCoord + 23, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 34, RXCoord + 23, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 36, RXCoord + 9, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 36, RXCoord + 22, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 37, RXCoord + 21, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 33, RXCoord + 22, RYCoord + 33, 0xFFFF);
VGA_box(RXCoord + 10, RYCoord + 36, RXCoord + 21, RYCoord + 36, 0xFFFF);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 7, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 6, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 21, RXCoord + 18, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 8, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 24, RXCoord + 20, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 7, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 25, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 25, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 8, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 32, RXCoord + 27, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 7, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 7, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 34, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 8, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 9, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielTimeRunningOutPose2(void)
{
// Render Start – Riel Time Running Out Pose (R10.png)

// Render Exclamation Mark
VGA_box(RXCoord, RYCoord + 1, RXCoord + 4, RYCoord + 1, 0x3A59);
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 3, RYCoord + 3, 0x3A59);
VGA_box(RXCoord + 2, RYCoord + 4, RXCoord + 2, RYCoord + 4, 0x3A59);
VGA_box(RXCoord + 2, RYCoord + 6, RXCoord + 2, RYCoord + 6, 0x3A59);

// Render Sweat
VGA_box(RXCoord + 24, RYCoord + 2, RXCoord + 24, RYCoord + 4, 0x9EDD);
VGA_box(RXCoord + 25, RYCoord + 2, RXCoord + 25, RYCoord + 2, 0x9EDD);
VGA_box(RXCoord + 25, RYCoord + 4, RXCoord + 25, RYCoord + 6, 0x9EDD);
VGA_box(RXCoord + 26, RYCoord + 3, RXCoord + 26, RYCoord + 4, 0x9EDD);
VGA_box(RXCoord + 29, RYCoord + 8, RXCoord + 29, RYCoord + 9, 0x9EDD);
VGA_box(RXCoord + 30, RYCoord + 6, RXCoord + 32, RYCoord + 6, 0x9EDD);
VGA_box(RXCoord + 30, RYCoord + 7, RXCoord + 31, RYCoord + 7, 0x9EDD);
VGA_box(RXCoord + 33, RYCoord + 7, RXCoord + 33, RYCoord + 7, 0x9EDD);
VGA_box(RXCoord + 32, RYCoord + 8, RXCoord + 32, RYCoord + 8, 0x9EDD);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 9, RXCoord + 11, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 9, RXCoord + 25, RYCoord + 9, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 10, RXCoord + 12, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 10, RXCoord + 26, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 11, RXCoord + 27, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 12, RXCoord + 28, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 13, RXCoord + 29, RYCoord + 14, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 15, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 30, RYCoord + 16, 0x0000);
VGA_box(RXCoord, RYCoord + 17, RXCoord + 5, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 4, RYCoord + 19, 0x0000);
VGA_box(RXCoord, RYCoord + 20, RXCoord + 3, RYCoord + 26, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 27, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 29, RXCoord + 4, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 30, RXCoord + 4, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 18, RXCoord + 30, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 20, RXCoord + 30, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 28, RXCoord + 29, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 29, RXCoord + 28, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 27, RYCoord + 31, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 17, RXCoord + 9, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 17, RXCoord + 12, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 17, RXCoord + 17, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 17, RXCoord + 23, RYCoord + 17, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 18, RXCoord + 16, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 18, RXCoord + 22, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 24, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 19, RXCoord + 6, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 20, RXCoord + 11, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 21, RXCoord + 12, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 22, RXCoord + 8, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 20, RXCoord + 22, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 21, RXCoord + 23, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 22, RXCoord + 20, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 23, RYCoord + 22, RXCoord + 24, RYCoord + 22, 0x0000);

// Render Eyes
VGA_box(RXCoord + 9, RYCoord + 24, RXCoord + 10, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 25, RXCoord + 11, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 29, RXCoord + 10, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 24, RXCoord + 22, RYCoord + 24, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 25, RXCoord + 23, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 29, RXCoord + 22, RYCoord + 29, 0x0000);

// Render Mouth
VGA_box(RXCoord + 8, RYCoord + 32, RXCoord + 23, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 33, RXCoord + 7, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 33, RXCoord + 24, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 34, RXCoord + 24, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 35, RXCoord + 12, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 35, RXCoord + 24, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 36, RXCoord + 23, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 37, RXCoord + 9, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 37, RXCoord + 22, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 38, RXCoord + 21, RYCoord + 38, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 33, RXCoord + 23, RYCoord + 33, 0xFFFF);
VGA_box(RXCoord + 10, RYCoord + 37, RXCoord + 21, RYCoord + 37, 0xFFFF);
VGA_box(RXCoord + 13, RYCoord + 35, RXCoord + 18, RYCoord + 35, 0xFD79);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 17, RXCoord + 7, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 17, RXCoord + 11, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 17, RXCoord + 14, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 17, RXCoord + 19, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 17, RXCoord + 25, RYCoord + 17, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 18, RXCoord + 6, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 10, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 15, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 18, RXCoord + 20, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 18, RXCoord + 26, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 5, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 21, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 8, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 20, RXCoord + 19, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 20, RXCoord + 27, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 7, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 6, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 22, RXCoord + 10, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 22, RXCoord + 22, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 21, RXCoord + 18, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 8, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 24, RXCoord + 20, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 7, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 25, RXCoord + 19, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 25, RXCoord + 27, RYCoord + 28, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 29, RXCoord + 8, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 29, RXCoord + 20, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 29, RXCoord + 26, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 30, RXCoord + 26, RYCoord + 31, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 32, RXCoord + 7, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 32, RXCoord + 27, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 6, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 34, RXCoord + 6, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 34, RXCoord + 26, RYCoord + 35, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 36, RXCoord + 7, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 36, RXCoord + 25, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 37, RXCoord + 8, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 37, RXCoord + 24, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 38, RXCoord + 9, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 38, RXCoord + 23, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 39, RXCoord + 22, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 40, RXCoord + 21, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 41, RXCoord + 19, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 42, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}


void rielTimeRunningOutPose3(void)
{
// Render Start – Riel Time Running Out Pose (R11.png)

// Render Exclamation Mark
VGA_box(RXCoord, RYCoord + 1, RXCoord + 4, RYCoord + 1, 0x3A59);
VGA_box(RXCoord + 1, RYCoord + 2, RXCoord + 3, RYCoord + 3, 0x3A59);
VGA_box(RXCoord + 2, RYCoord + 4, RXCoord + 2, RYCoord + 4, 0x3A59);
VGA_box(RXCoord + 2, RYCoord + 6, RXCoord + 2, RYCoord + 6, 0x3A59);

// Render Sweat
VGA_box(RXCoord + 25, RYCoord + 4, RXCoord + 25, RYCoord + 7, 0x9EDD);
VGA_box(RXCoord + 26, RYCoord + 3, RXCoord + 26, RYCoord + 3, 0x9EDD);
VGA_box(RXCoord + 26, RYCoord + 5, RXCoord + 26, RYCoord + 5, 0x9EDD);
VGA_box(RXCoord + 27, RYCoord + 3, RXCoord + 27, RYCoord + 4, 0x9EDD);
VGA_box(RXCoord + 32, RYCoord + 8, RXCoord + 32, RYCoord + 8, 0x9EDD);
VGA_box(RXCoord + 29, RYCoord + 9, RXCoord + 29, RYCoord + 9, 0x9EDD);
VGA_box(RXCoord + 31, RYCoord + 9, RXCoord + 31, RYCoord + 9, 0x9EDD);
VGA_box(RXCoord + 33, RYCoord + 9, RXCoord + 33, RYCoord + 9, 0x9EDD);
VGA_box(RXCoord + 30, RYCoord + 10, RXCoord + 32, RYCoord + 10, 0x9EDD);

// Render Hair
VGA_box(RXCoord + 6, RYCoord + 10, RXCoord + 11, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 10, RXCoord + 25, RYCoord + 10, 0x0000);
VGA_box(RXCoord + 5, RYCoord + 11, RXCoord + 12, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 14, RYCoord + 11, RXCoord + 26, RYCoord + 11, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 12, RXCoord + 27, RYCoord + 12, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 13, RXCoord + 28, RYCoord + 13, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 14, RXCoord + 29, RYCoord + 15, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 16, RXCoord + 29, RYCoord + 16, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 17, RXCoord + 30, RYCoord + 17, 0x0000);
VGA_box(RXCoord, RYCoord + 18, RXCoord + 5, RYCoord + 18, 0x0000);
VGA_box(RXCoord, RYCoord + 19, RXCoord + 4, RYCoord + 20, 0x0000);
VGA_box(RXCoord, RYCoord + 21, RXCoord + 3, RYCoord + 27, 0x0000);
VGA_box(RXCoord + 1, RYCoord + 28, RXCoord + 3, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 2, RYCoord + 29, RXCoord + 3, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 3, RYCoord + 30, RXCoord + 4, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 4, RYCoord + 31, RXCoord + 4, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 26, RYCoord + 18, RXCoord + 30, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 19, RXCoord + 30, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 21, RXCoord + 30, RYCoord + 28, 0x0000);
VGA_box(RXCoord + 28, RYCoord + 29, RXCoord + 29, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 30, RXCoord + 28, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 27, RYCoord + 31, RXCoord + 27, RYCoord + 32, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 18, RXCoord + 9, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 12, RYCoord + 18, RXCoord + 12, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 15, RYCoord + 18, RXCoord + 17, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 18, RXCoord + 23, RYCoord + 18, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 19, RXCoord + 7, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 19, RXCoord + 11, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 16, RYCoord + 19, RXCoord + 16, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 19, RXCoord + 22, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 19, RXCoord + 24, RYCoord + 19, 0x0000);
VGA_box(RXCoord + 6, RYCoord + 20, RXCoord + 6, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 20, RXCoord + 23, RYCoord + 20, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 21, RXCoord + 11, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 22, RXCoord + 12, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 23, RXCoord + 8, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 11, RYCoord + 23, RXCoord + 12, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 21, RXCoord + 22, RYCoord + 21, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 22, RXCoord + 23, RYCoord + 22, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 23, RXCoord + 20, RYCoord + 23, 0x0000);
VGA_box(RXCoord + 23, RYCoord + 23, RXCoord + 24, RYCoord + 23, 0x0000);

// Render Eyes
VGA_box(RXCoord + 9, RYCoord + 25, RXCoord + 10, RYCoord + 25, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 26, RXCoord + 11, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 30, RXCoord + 10, RYCoord + 30, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 25, RXCoord + 22, RYCoord + 25, 0x0000);
VGA_box(RXCoord + 20, RYCoord + 26, RXCoord + 23, RYCoord + 29, 0x0000);
VGA_box(RXCoord + 21, RYCoord + 30, RXCoord + 22, RYCoord + 30, 0x0000);

// Render Mouth
VGA_box(RXCoord + 8, RYCoord + 33, RXCoord + 23, RYCoord + 33, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 34, RXCoord + 7, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 24, RYCoord + 34, RXCoord + 24, RYCoord + 34, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 35, RXCoord + 24, RYCoord + 35, 0x0000);
VGA_box(RXCoord + 7, RYCoord + 36, RXCoord + 12, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 19, RYCoord + 36, RXCoord + 24, RYCoord + 36, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 37, RXCoord + 23, RYCoord + 37, 0x0000);
VGA_box(RXCoord + 9, RYCoord + 38, RXCoord + 9, RYCoord + 38, 0x0000);
VGA_box(RXCoord + 22, RYCoord + 38, RXCoord + 22, RYCoord + 38, 0x0000);
VGA_box(RXCoord + 10, RYCoord + 39, RXCoord + 21, RYCoord + 39, 0x0000);
VGA_box(RXCoord + 8, RYCoord + 34, RXCoord + 23, RYCoord + 34, 0xFFFF);
VGA_box(RXCoord + 10, RYCoord + 38, RXCoord + 21, RYCoord + 38, 0xFFFF);
VGA_box(RXCoord + 13, RYCoord + 36, RXCoord + 18, RYCoord + 36, 0xFD79);

// Render Skin
VGA_box(RXCoord + 6, RYCoord + 18, RXCoord + 7, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 18, RXCoord + 11, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 18, RXCoord + 14, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 18, RYCoord + 18, RXCoord + 19, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 18, RXCoord + 25, RYCoord + 18, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 19, RXCoord + 6, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 19, RXCoord + 10, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 19, RXCoord + 15, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 17, RYCoord + 19, RXCoord + 20, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 19, RXCoord + 23, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 19, RXCoord + 26, RYCoord + 19, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 20, RXCoord + 5, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 20, RXCoord + 21, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 20, RXCoord + 26, RYCoord + 20, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 21, RXCoord + 5, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 21, RXCoord + 8, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 21, RXCoord + 19, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 21, RXCoord + 27, RYCoord + 21, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 22, RXCoord + 7, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 22, RXCoord + 27, RYCoord + 22, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 23, RXCoord + 6, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 23, RXCoord + 10, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 21, RYCoord + 23, RXCoord + 22, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 23, RXCoord + 27, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 13, RYCoord + 22, RXCoord + 18, RYCoord + 23, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 24, RXCoord + 27, RYCoord + 24, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 25, RXCoord + 8, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 25, RXCoord + 20, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 25, RXCoord + 27, RYCoord + 25, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 26, RXCoord + 7, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 26, RXCoord + 19, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 26, RXCoord + 27, RYCoord + 29, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 30, RXCoord + 8, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 11, RYCoord + 30, RXCoord + 20, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 30, RXCoord + 26, RYCoord + 30, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 31, RXCoord + 26, RYCoord + 32, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 33, RXCoord + 7, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 33, RXCoord + 27, RYCoord + 33, 0xE5D4);
VGA_box(RXCoord + 4, RYCoord + 34, RXCoord + 6, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 34, RXCoord + 27, RYCoord + 34, 0xE5D4);
VGA_box(RXCoord + 5, RYCoord + 35, RXCoord + 6, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 25, RYCoord + 35, RXCoord + 26, RYCoord + 36, 0xE5D4);
VGA_box(RXCoord + 6, RYCoord + 37, RXCoord + 7, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 24, RYCoord + 37, RXCoord + 25, RYCoord + 37, 0xE5D4);
VGA_box(RXCoord + 7, RYCoord + 38, RXCoord + 8, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 23, RYCoord + 38, RXCoord + 24, RYCoord + 38, 0xE5D4);
VGA_box(RXCoord + 8, RYCoord + 39, RXCoord + 9, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 22, RYCoord + 39, RXCoord + 23, RYCoord + 39, 0xE5D4);
VGA_box(RXCoord + 9, RYCoord + 40, RXCoord + 22, RYCoord + 40, 0xE5D4);
VGA_box(RXCoord + 10, RYCoord + 41, RXCoord + 21, RYCoord + 41, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 42, RXCoord + 19, RYCoord + 42, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 43, RXCoord + 17, RYCoord + 44, 0xE5D4);
VGA_box(RXCoord + 12, RYCoord + 45, RXCoord + 19, RYCoord + 46, 0xE5D4);
VGA_box(RXCoord + 14, RYCoord + 47, RXCoord + 17, RYCoord + 48, 0xE5D4);

// Render Shirt
VGA_box(RXCoord + 10, RYCoord + 45, RXCoord + 11, RYCoord + 46, 0x3A59);
VGA_box(RXCoord + 8, RYCoord + 47, RXCoord + 13, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 10, RYCoord + 49, RXCoord + 21, RYCoord + 50, 0x3A59);
VGA_box(RXCoord + 14, RYCoord + 51, RXCoord + 17, RYCoord + 52, 0x3A59);
VGA_box(RXCoord + 18, RYCoord + 47, RXCoord + 23, RYCoord + 48, 0x3A59);
VGA_box(RXCoord + 20, RYCoord + 45, RXCoord + 21, RYCoord + 46, 0x3A59);
}
