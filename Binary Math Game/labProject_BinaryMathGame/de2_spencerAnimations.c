// C functions that define Spencer's animations

#include "de2_vga.h"
#include "de2_spencerAnimations.h"


// Skin color RGB888: 0xF7DBD2
// Skin color RGB565: 0xF6DA
// Shirt color RGB888: 0x22B14C
// Shirt color RGB565: 0x2589
// Hair color RGB888: 0xC6A584
// Hair color RGB565: 0xC530
// Alt hair color RGB888: 0x5E3C24
// Alt hair color RGB565: 0x59E4
// Glasses/mouth color RGB888: 0x000000
// Glasses/mouth color RGB565: 0x0000
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
// Tear color RGB888: 0x99D9EA
// Tear color RGB565: 0x9EDD

void spencerBGReset(void) {
	VGA_box(SXCoord, SYCoord, SXCoord + 31, SYCoord + 52, 0xFFFF);
}

void spencerNeutralPose1(void)
{
  // Rendering Start – Spencer Neutral Pose (S1.png)

  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 7, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 34, SXCoord + 24, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 20, SXCoord + 8, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 22, SXCoord + 7, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 21, SXCoord + 12, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 21, SXCoord + 23, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 22, SXCoord + 24, SYCoord + 22, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 11, SYCoord + 28, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 25, SXCoord + 23, SYCoord + 28, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 9, SYCoord + 32, SXCoord + 22, SYCoord + 32, 0x0000);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 27, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 7, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 21, SXCoord + 18, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 6, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 22, SXCoord + 18, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 19, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 8, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 23, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 34, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 38, SXCoord + 24, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 23, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 40, SXCoord + 21, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 41, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerNeutralPose2(void)
{
  // Rendering Start – Spencer Neutral Pose (S2.png)

  // Render Hair
  VGA_box(SXCoord, SYCoord + 14, SXCoord + 3, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord, SYCoord + 27, SXCoord + 2, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 5, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 32, SXCoord + 6, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 35, SXCoord + 7, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 10, SXCoord + 4, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 10, SXCoord + 5, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 10, SXCoord + 25, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 10, SXCoord + 26, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 10, SXCoord + 27, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 14, SXCoord + 31, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 26, SXCoord + 31, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 27, SXCoord + 31, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 32, SXCoord + 27, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 35, SXCoord + 24, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 6, SXCoord + 23, SYCoord + 9, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 2, SXCoord + 19, SYCoord + 5, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 1, SXCoord + 16, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 2, SXCoord + 11, SYCoord + 2, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 21, SXCoord + 8, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 23, SXCoord + 7, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 22, SXCoord + 12, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 22, SXCoord + 23, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 23, SXCoord + 24, SYCoord + 23, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0x0000);
  VGA_box(SXCoord, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 26, SXCoord + 3, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 27, SXCoord + 3, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 12, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 27, SXCoord + 13, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 25, SXCoord + 17, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 30, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 27, SXCoord + 28, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 31, SXCoord + 27, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 27, SXCoord + 18, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 26, SXCoord + 11, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 26, SXCoord + 23, SYCoord + 29, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 9, SYCoord + 33, SXCoord + 22, SYCoord + 33, 0x0000);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 18, SXCoord + 25, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 19, SXCoord + 26, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 7, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 22, SXCoord + 18, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 23, SXCoord + 6, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 23, SXCoord + 18, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 23, SXCoord + 27, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 26, SXCoord + 7, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 13, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 27, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 27, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 19, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 27, SXCoord + 19, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 25, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 26, SXCoord + 27, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 27, SXCoord + 17, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 31, SXCoord + 18, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 8, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 23, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 24, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 35, SXCoord + 23, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 38, SXCoord + 25, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 39, SXCoord + 24, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 40, SXCoord + 23, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 41, SXCoord + 21, SYCoord + 41, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 42, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerWinPose1(void)
{
  // Rendering Start – Spencer Win Pose (S3.png)

  // Render Star
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 1, SYCoord + 3, 0xFF80);
  VGA_box(SXCoord + 2, SYCoord + 1, SXCoord + 2, SYCoord + 4, 0xFF80);
  VGA_box(SXCoord + 3, SYCoord + 2, SXCoord + 3, SYCoord + 3, 0xFF80);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 7, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 34, SXCoord + 24, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 21, SXCoord + 23, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 22, SXCoord + 24, SYCoord + 22, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 11, SYCoord + 28, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 25, SXCoord + 23, SYCoord + 28, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 9, SYCoord + 32, SXCoord + 22, SYCoord + 32, 0x0000);
  VGA_box(SXCoord + 10, SYCoord + 33, SXCoord + 11, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 33, SXCoord + 21, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 34, SXCoord + 20, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 35, SXCoord + 13, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 35, SXCoord + 19, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 36, SXCoord + 18, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 33, SXCoord + 19, SYCoord + 33, 0xFFFF);
  VGA_box(SXCoord + 14, SYCoord + 35, SXCoord + 17, SYCoord + 35, 0xFD79);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 27, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 7, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 6, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 21, SXCoord + 18, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 18, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 19, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 8, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 23, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 9, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 34, SXCoord + 10, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 21, SYCoord + 34, SXCoord + 23, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 35, SXCoord + 11, SYCoord + 35, 0xF6DA);
  VGA_box(SXCoord + 20, SYCoord + 35, SXCoord + 23, SYCoord + 35, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 36, SXCoord + 12, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 36, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 38, SXCoord + 24, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 23, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 41, SXCoord + 21, SYCoord + 41, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 42, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerWinPose2(void)
{
  // Rendering Start – Spencer Win Pose (S4.png)

  // Render Star
  VGA_box(SXCoord, SYCoord + 2, SXCoord, SYCoord + 2, 0xFF80);
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 1, SYCoord + 5, 0xFF80);
  VGA_box(SXCoord + 2, SYCoord, SXCoord + 2, SYCoord + 4, 0xFF80);
  VGA_box(SXCoord + 3, SYCoord + 2, SXCoord + 3, SYCoord + 5, 0xFF80);
  VGA_box(SXCoord + 4, SYCoord + 2, SXCoord + 4, SYCoord + 2, 0xFF80);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 7, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 34, SXCoord + 24, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 20, SXCoord + 8, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 19, SXCoord + 12, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 9, SYCoord + 18, SXCoord + 11, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 21, SXCoord + 23, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 22, SXCoord + 24, SYCoord + 22, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 11, SYCoord + 28, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 25, SXCoord + 23, SYCoord + 28, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 9, SYCoord + 32, SXCoord + 22, SYCoord + 32, 0x0000);
  VGA_box(SXCoord + 10, SYCoord + 33, SXCoord + 11, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 33, SXCoord + 21, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 34, SXCoord + 20, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 35, SXCoord + 14, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 17, SYCoord + 35, SXCoord + 20, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 36, SXCoord + 13, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 36, SXCoord + 19, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 37, SXCoord + 18, SYCoord + 37, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 33, SXCoord + 19, SYCoord + 33, 0xFFFF);
  VGA_box(SXCoord + 14, SYCoord + 36, SXCoord + 17, SYCoord + 36, 0xFD79);
  VGA_box(SXCoord + 15, SYCoord + 35, SXCoord + 16, SYCoord + 35, 0xFD79);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 8, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 7, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 19, SXCoord + 27, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 6, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 9, SYCoord + 20, SXCoord + 10, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 18, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 19, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 8, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 23, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 9, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 34, SXCoord + 10, SYCoord + 35, 0xF6DA);
  VGA_box(SXCoord + 21, SYCoord + 34, SXCoord + 23, SYCoord + 35, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 36, SXCoord + 11, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 20, SYCoord + 36, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 12, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 38, SXCoord + 24, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 23, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 41, SXCoord + 21, SYCoord + 41, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 42, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerWinPose3(void)
{
  // Rendering Start – Spencer Win Pose (S5.png)

  // Render Star
  VGA_box(SXCoord, SYCoord + 2, SXCoord, SYCoord + 2, 0xFF80);
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 1, SYCoord + 5, 0xFF80);
  VGA_box(SXCoord + 2, SYCoord, SXCoord + 2, SYCoord + 4, 0xFF80);
  VGA_box(SXCoord + 3, SYCoord + 2, SXCoord + 3, SYCoord + 5, 0xFF80);
  VGA_box(SXCoord + 4, SYCoord + 2, SXCoord + 4, SYCoord + 2, 0xFF80);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 14, SXCoord + 3, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord, SYCoord + 27, SXCoord + 2, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 5, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 32, SXCoord + 6, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 35, SXCoord + 7, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 10, SXCoord + 4, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 10, SXCoord + 5, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 10, SXCoord + 25, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 10, SXCoord + 26, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 10, SXCoord + 27, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 14, SXCoord + 31, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 26, SXCoord + 31, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 27, SXCoord + 31, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 32, SXCoord + 27, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 35, SXCoord + 24, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 6, SXCoord + 23, SYCoord + 9, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 2, SXCoord + 19, SYCoord + 5, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 1, SXCoord + 16, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 2, SXCoord + 11, SYCoord + 2, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 21, SXCoord + 8, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 9, SYCoord + 19, SXCoord + 11, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 22, SXCoord + 23, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 23, SXCoord + 24, SYCoord + 23, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0x0000);
  VGA_box(SXCoord, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 26, SXCoord + 3, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 27, SXCoord + 3, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 12, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 27, SXCoord + 13, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 25, SXCoord + 17, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 30, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 27, SXCoord + 28, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 31, SXCoord + 27, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 27, SXCoord + 18, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 26, SXCoord + 11, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 26, SXCoord + 23, SYCoord + 29, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 9, SYCoord + 33, SXCoord + 22, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 10, SYCoord + 34, SXCoord + 11, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 34, SXCoord + 21, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 35, SXCoord + 20, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 36, SXCoord + 14, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 17, SYCoord + 36, SXCoord + 20, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 37, SXCoord + 13, SYCoord + 37, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 37, SXCoord + 19, SYCoord + 37, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 38, SXCoord + 18, SYCoord + 38, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 34, SXCoord + 19, SYCoord + 34, 0xFFFF);
  VGA_box(SXCoord + 14, SYCoord + 37, SXCoord + 17, SYCoord + 37, 0xFD79);
  VGA_box(SXCoord + 15, SYCoord + 36, SXCoord + 16, SYCoord + 36, 0xFD79);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 18, SXCoord + 25, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 19, SXCoord + 8, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 19, SXCoord + 26, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 7, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 6, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 9, SYCoord + 21, SXCoord + 10, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 18, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 23, SXCoord + 27, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 26, SXCoord + 7, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 13, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 27, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 27, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 19, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 27, SXCoord + 19, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 25, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 26, SXCoord + 27, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 27, SXCoord + 17, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 31, SXCoord + 18, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 8, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 23, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 9, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 34, SXCoord + 24, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 35, SXCoord + 10, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 21, SYCoord + 35, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 37, SXCoord + 11, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 20, SYCoord + 37, SXCoord + 23, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 38, SXCoord + 12, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 38, SXCoord + 25, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 39, SXCoord + 24, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 40, SXCoord + 23, SYCoord + 41, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 42, SXCoord + 21, SYCoord + 42, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 43, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerLosePose1(void)
{
  // Rendering Start – Spencer Lose Pose (S6.png)

  // Render Red X
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 1, SYCoord + 2, 0xE8E4);
  VGA_box(SXCoord + 1, SYCoord + 5, SXCoord + 1, SYCoord + 5, 0xE8E4);
  VGA_box(SXCoord + 2, SYCoord + 3, SXCoord + 3, SYCoord + 4, 0xE8E4);
  VGA_box(SXCoord + 4, SYCoord + 2, SXCoord + 4, SYCoord + 2, 0xE8E4);
  VGA_box(SXCoord + 4, SYCoord + 5, SXCoord + 4, SYCoord + 5, 0xE8E4);


  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 7, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 34, SXCoord + 24, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 20, SXCoord + 8, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 22, SXCoord + 12, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 22, SXCoord + 23, SYCoord + 22, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 11, SYCoord + 27, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 25, SXCoord + 23, SYCoord + 27, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 8, SYCoord + 32, SXCoord + 23, SYCoord + 32, 0x0000);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 7, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 22, SXCoord + 18, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 28, SXCoord + 11, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 19, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 28, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 7, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 34, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 38, SXCoord + 24, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 23, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 40, SXCoord + 21, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 41, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerLosePose2(void)
{
  // Rendering Start – Spencer Lose Pose (S7.png)

  // Render Red X
  VGA_box(SXCoord, SYCoord + 1, SXCoord, SYCoord + 1, 0xE8E4);
  VGA_box(SXCoord, SYCoord + 6, SXCoord, SYCoord + 6, 0xE8E4);
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 1, SYCoord + 2, 0xE8E4);
  VGA_box(SXCoord + 1, SYCoord + 5, SXCoord + 1, SYCoord + 5, 0xE8E4);
  VGA_box(SXCoord + 2, SYCoord + 3, SXCoord + 3, SYCoord + 4, 0xE8E4);
  VGA_box(SXCoord + 4, SYCoord + 2, SXCoord + 4, SYCoord + 2, 0xE8E4);
  VGA_box(SXCoord + 4, SYCoord + 5, SXCoord + 4, SYCoord + 5, 0xE8E4);
  VGA_box(SXCoord + 5, SYCoord + 1, SXCoord + 5, SYCoord + 1, 0xE8E4);
  VGA_box(SXCoord + 5, SYCoord + 6, SXCoord + 5, SYCoord + 6, 0XE8E4);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 31, 0X59E4);
  VGA_box(SXCoord + 4, SYCoord + 32, SXCoord + 5, SYCoord + 32, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 33, SXCoord + 6, SYCoord + 33, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 34, SXCoord + 7, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 31, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 32, SXCoord + 27, SYCoord + 32, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 33, SXCoord + 27, SYCoord + 33, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 34, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 20, SXCoord + 8, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 25, SXCoord + 12, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 24, SXCoord + 12, SYCoord + 24, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 25, SXCoord + 24, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 24, SXCoord + 23, SYCoord + 24, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 26, SXCoord + 11, SYCoord + 27, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 26, SXCoord + 23, SYCoord + 27, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 6, SYCoord + 32, SXCoord + 25, SYCoord + 32, 0x0000);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 7, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 6, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 26, SXCoord + 7, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 28, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 24, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 25, SXCoord + 27, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 26, SXCoord + 27, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 28, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 27, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 18, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 34, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 38, SXCoord + 24, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 23, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 40, SXCoord + 21, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 41, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerLosePose3(void)
{
  // Rendering Start – Spencer Lose Pose (S8.png)

  // Render Red X
  VGA_box(SXCoord, SYCoord + 1, SXCoord, SYCoord + 1, 0xE8E4);
  VGA_box(SXCoord, SYCoord + 6, SXCoord, SYCoord + 6, 0xE8E4);
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 1, SYCoord + 2, 0xE8E4);
  VGA_box(SXCoord + 1, SYCoord + 5, SXCoord + 1, SYCoord + 5, 0xE8E4);
  VGA_box(SXCoord + 2, SYCoord + 3, SXCoord + 3, SYCoord + 4, 0xE8E4);
  VGA_box(SXCoord + 4, SYCoord + 2, SXCoord + 4, SYCoord + 2, 0xE8E4);
  VGA_box(SXCoord + 4, SYCoord + 5, SXCoord + 4, SYCoord + 5, 0xE8E4);
  VGA_box(SXCoord + 5, SYCoord + 1, SXCoord + 5, SYCoord + 1, 0xE8E4);
  VGA_box(SXCoord + 5, SYCoord + 6, SXCoord + 5, SYCoord + 6, 0XE8E4);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 14, SXCoord + 3, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord, SYCoord + 27, SXCoord + 2, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 5, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 32, SXCoord + 6, SYCoord + 32, 0X59E4);
  VGA_box(SXCoord + 4, SYCoord + 33, SXCoord + 5, SYCoord + 33, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 34, SXCoord + 6, SYCoord + 34, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 35, SXCoord + 7, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 10, SXCoord + 4, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 10, SXCoord + 5, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 10, SXCoord + 25, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 10, SXCoord + 26, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 10, SXCoord + 27, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 14, SXCoord + 31, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 26, SXCoord + 31, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 27, SXCoord + 31, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 32, SXCoord + 27, SYCoord + 32, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 33, SXCoord + 27, SYCoord + 33, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 34, SXCoord + 27, SYCoord + 34, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 35, SXCoord + 27, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 6, SXCoord + 23, SYCoord + 9, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 2, SXCoord + 19, SYCoord + 5, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 1, SXCoord + 16, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 2, SXCoord + 11, SYCoord + 2, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 21, SXCoord + 8, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 26, SXCoord + 12, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 12, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 24, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 25, SXCoord + 23, SYCoord + 25, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0x0000);
  VGA_box(SXCoord, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 26, SXCoord + 3, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 27, SXCoord + 3, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 12, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 27, SXCoord + 13, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 25, SXCoord + 17, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 30, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 27, SXCoord + 28, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 31, SXCoord + 27, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 27, SXCoord + 18, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 27, SXCoord + 11, SYCoord + 28, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 27, SXCoord + 23, SYCoord + 28, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 6, SYCoord + 33, SXCoord + 25, SYCoord + 33, 0x0000);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 18, SXCoord + 25, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 19, SXCoord + 26, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 27, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 26, SXCoord + 6, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 27, SXCoord + 7, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 27, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 25, SXCoord + 13, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 26, SXCoord + 27, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 27, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 25, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 27, SXCoord + 19, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 18, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 27, SXCoord + 17, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 31, SXCoord + 18, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 24, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 35, SXCoord + 23, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 38, SXCoord + 25, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 39, SXCoord + 24, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 40, SXCoord + 23, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 41, SXCoord + 21, SYCoord + 41, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 42, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerTimeRunningOutPose1(void)
{
  // Rendering Start – Spencer Time Running Out Pose (S9.png)

  // Render Exclamation Mark
  VGA_box(SXCoord + 1, SYCoord + 1, SXCoord + 3, SYCoord + 2, 0x3A59);
  VGA_box(SXCoord + 2, SYCoord + 3, SXCoord + 2, SYCoord + 3, 0x3A59);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 34, SXCoord + 7, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 24, SYCoord + 34, SXCoord + 24, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 20, SXCoord + 8, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 22, SXCoord + 10, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 21, SYCoord + 22, SXCoord + 24, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 21, SXCoord + 23, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 20, SXCoord + 21, SYCoord + 20, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 11, SYCoord + 28, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 25, SXCoord + 23, SYCoord + 28, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 10, SYCoord + 32, SXCoord + 21, SYCoord + 32, 0x0000);
  VGA_box(SXCoord + 9, SYCoord + 33, SXCoord + 10, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 21, SYCoord + 33, SXCoord + 22, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 10, SYCoord + 34, SXCoord + 21, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 35, SXCoord + 13, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 35, SXCoord + 20, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 36, SXCoord + 19, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 33, SXCoord + 20, SYCoord + 33, 0xFFFF);
  VGA_box(SXCoord + 14, SYCoord + 35, SXCoord + 17, SYCoord + 35, 0xFD79);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 27, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 9, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 7, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 20, SXCoord + 18, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 6, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 22, SXCoord + 20, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 6, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 19, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 20, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 9, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 8, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 23, SYCoord + 33, SXCoord + 24, SYCoord + 33, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 34, SXCoord + 9, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 34, SXCoord + 23, SYCoord + 34, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 35, SXCoord + 10, SYCoord + 35, 0xF6DA);
  VGA_box(SXCoord + 21, SYCoord + 35, SXCoord + 23, SYCoord + 35, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 36, SXCoord + 11, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 20, SYCoord + 36, SXCoord + 23, SYCoord + 36, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 7, SYCoord + 38, SXCoord + 24, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 23, SYCoord + 39, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 40, SXCoord + 21, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 41, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Tears
  VGA_box(SXCoord + 7, SYCoord + 29, SXCoord + 10, SYCoord + 29, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 29, SXCoord + 24, SYCoord + 29, 0x9EDD);


  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerTimeRunningOutPose2(void)
{
  // Rendering Start – Spencer Time Running Out Pose (S10.png)

  // Render Exclamation Mark
  VGA_box(SXCoord, SYCoord + 1, SXCoord + 4, SYCoord + 1, 0x3A59);
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 3, SYCoord + 3, 0x3A59);
  VGA_box(SXCoord + 2, SYCoord + 4, SXCoord + 2, SYCoord + 4, 0x3A59);
  VGA_box(SXCoord + 2, SYCoord + 6, SXCoord + 2, SYCoord + 6, 0x3A59);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 13, SXCoord + 3, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord, SYCoord + 25, SXCoord, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord + 2, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 29, SXCoord + 5, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 9, SXCoord + 4, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 9, SXCoord + 5, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 9, SXCoord + 25, SYCoord + 16, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 9, SXCoord + 26, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 9, SXCoord + 27, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 13, SXCoord + 31, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 26, SXCoord + 31, SYCoord + 28, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 29, SXCoord + 27, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 31, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 5, SXCoord + 23, SYCoord + 8, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 1, SXCoord + 19, SYCoord + 4, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord, SXCoord + 16, SYCoord, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 1, SXCoord + 11, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 20, SXCoord + 8, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 21, SXCoord + 10, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 19, SXCoord + 12, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 21, SYCoord + 21, SXCoord + 24, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 20, SXCoord + 23, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 19, SXCoord + 21, SYCoord + 19, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 23, SXCoord + 13, SYCoord + 23, 0x0000);
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 3, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 26, SXCoord + 3, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 26, SXCoord + 13, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 23, SXCoord + 31, SYCoord + 23, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 30, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 28, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 18, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 25, SXCoord + 11, SYCoord + 28, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 25, SXCoord + 23, SYCoord + 28, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 10, SYCoord + 32, SXCoord + 21, SYCoord + 32, 0x0000);
  VGA_box(SXCoord + 9, SYCoord + 33, SXCoord + 10, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 21, SYCoord + 33, SXCoord + 22, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 9, SYCoord + 34, SXCoord + 22, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 10, SYCoord + 35, SXCoord + 14, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 17, SYCoord + 35, SXCoord + 21, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 36, SXCoord + 13, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 36, SXCoord + 20, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 37, SXCoord + 19, SYCoord + 37, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 33, SXCoord + 20, SYCoord + 33, 0xFFFF);
  VGA_box(SXCoord + 15, SYCoord + 35, SXCoord + 16, SYCoord + 35, 0xFD79);
  VGA_box(SXCoord + 14, SYCoord + 36, SXCoord + 17, SYCoord + 36, 0xFD79);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 17, SXCoord + 25, SYCoord + 17, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 18, SXCoord + 26, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 19, SXCoord + 9, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 19, SXCoord + 27, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 7, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 19, SXCoord + 18, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 6, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 21, SXCoord + 20, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 23, SXCoord + 17, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 7, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 29, SXCoord + 6, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 29, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 12, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 27, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 19, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 26, SXCoord + 19, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 29, SXCoord + 20, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 29, SXCoord + 25, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 25, SXCoord + 27, SYCoord + 28, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 26, SXCoord + 17, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 30, SXCoord + 18, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 31, SXCoord + 20, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 6, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 37, SXCoord + 11, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 20, SYCoord + 37, SXCoord + 20, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 37, SXCoord + 25, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 38, SXCoord + 20, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 41, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Tears
  VGA_box(SXCoord + 7, SYCoord + 29, SXCoord + 10, SYCoord + 29, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 31, SXCoord + 10, SYCoord + 31, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 9, SYCoord + 32, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 33, SXCoord + 8, SYCoord + 34, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 35, SXCoord + 9, SYCoord + 35, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 36, SXCoord + 10, SYCoord + 38, 0x9EDD);
  VGA_box(SXCoord + 8, SYCoord + 39, SXCoord + 10, SYCoord + 39, 0x9EDD);
  VGA_box(SXCoord + 9, SYCoord + 40, SXCoord + 10, SYCoord + 40, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 29, SXCoord + 24, SYCoord + 29, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 31, SXCoord + 24, SYCoord + 31, 0x9EDD);
  VGA_box(SXCoord + 22, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0x9EDD);
  VGA_box(SXCoord + 23, SYCoord + 33, SXCoord + 24, SYCoord + 34, 0x9EDD);
  VGA_box(SXCoord + 22, SYCoord + 35, SXCoord + 24, SYCoord + 35, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 36, SXCoord + 24, SYCoord + 38, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 39, SXCoord + 23, SYCoord + 39, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 40, SXCoord + 22, SYCoord + 40, 0x9EDD);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}


void spencerTimeRunningOutPose3(void)
{
  // Rendering Start – Spencer Time Running Out Pose (S11.png)

  // Render Exclamation Mark
  VGA_box(SXCoord, SYCoord + 1, SXCoord + 4, SYCoord + 1, 0x3A59);
  VGA_box(SXCoord + 1, SYCoord + 2, SXCoord + 3, SYCoord + 3, 0x3A59);
  VGA_box(SXCoord + 2, SYCoord + 4, SXCoord + 2, SYCoord + 4, 0x3A59);
  VGA_box(SXCoord + 2, SYCoord + 6, SXCoord + 2, SYCoord + 6, 0x3A59);

  // Render Hair
  VGA_box(SXCoord, SYCoord + 14, SXCoord + 3, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord, SYCoord + 26, SXCoord, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord, SYCoord + 27, SXCoord + 2, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 30, SXCoord + 5, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 32, SXCoord + 6, SYCoord + 32, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 33, SXCoord + 5, SYCoord + 34, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 35, SXCoord + 6, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 37, SXCoord + 5, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 4, SYCoord + 10, SXCoord + 4, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 5, SYCoord + 10, SXCoord + 5, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 6, SYCoord + 10, SXCoord + 25, SYCoord + 17, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 10, SXCoord + 26, SYCoord + 18, 0x59E4);
  VGA_box(SXCoord + 27, SYCoord + 10, SXCoord + 27, SYCoord + 19, 0x59E4);
  VGA_box(SXCoord + 28, SYCoord + 14, SXCoord + 31, SYCoord + 23, 0x59E4);
  VGA_box(SXCoord + 31, SYCoord + 26, SXCoord + 31, SYCoord + 26, 0x59E4);
  VGA_box(SXCoord + 29, SYCoord + 27, SXCoord + 31, SYCoord + 29, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 30, SXCoord + 27, SYCoord + 30, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 32, SXCoord + 27, SYCoord + 32, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 33, SXCoord + 27, SYCoord + 34, 0x59E4);
  VGA_box(SXCoord + 25, SYCoord + 35, SXCoord + 27, SYCoord + 36, 0x59E4);
  VGA_box(SXCoord + 26, SYCoord + 37, SXCoord + 27, SYCoord + 37, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 6, SXCoord + 23, SYCoord + 9, 0x59E4);
  VGA_box(SXCoord + 12, SYCoord + 2, SXCoord + 19, SYCoord + 5, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 1, SXCoord + 16, SYCoord + 1, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 2, SXCoord + 11, SYCoord + 2, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 21, SXCoord + 8, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 11, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 7, SYCoord + 22, SXCoord + 10, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 8, SYCoord + 21, SXCoord + 12, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 10, SYCoord + 20, SXCoord + 12, SYCoord + 20, 0x59E4);
  VGA_box(SXCoord + 21, SYCoord + 22, SXCoord + 24, SYCoord + 22, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 21, SXCoord + 23, SYCoord + 21, 0x59E4);
  VGA_box(SXCoord + 19, SYCoord + 20, SXCoord + 21, SYCoord + 20, 0x59E4);

  // Render Glasses
  VGA_box(SXCoord, SYCoord + 24, SXCoord + 13, SYCoord + 24, 0x0000);
  VGA_box(SXCoord, SYCoord + 25, SXCoord + 3, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 1, SYCoord + 26, SXCoord + 3, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 3, SYCoord + 27, SXCoord + 3, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 4, SYCoord + 31, SXCoord + 12, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 13, SYCoord + 27, SXCoord + 13, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 14, SYCoord + 25, SXCoord + 17, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 24, SXCoord + 31, SYCoord + 24, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 25, SXCoord + 31, SYCoord + 25, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 26, SXCoord + 30, SYCoord + 26, 0x0000);
  VGA_box(SXCoord + 28, SYCoord + 27, SXCoord + 28, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 19, SYCoord + 31, SXCoord + 27, SYCoord + 31, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 27, SXCoord + 18, SYCoord + 30, 0x0000);
  VGA_box(SXCoord + 8, SYCoord + 26, SXCoord + 11, SYCoord + 29, 0x0000);
  VGA_box(SXCoord + 20, SYCoord + 26, SXCoord + 23, SYCoord + 29, 0x0000);

  // Render Mouth
  VGA_box(SXCoord + 10, SYCoord + 33, SXCoord + 21, SYCoord + 33, 0x0000);
  VGA_box(SXCoord + 9, SYCoord + 34, SXCoord + 10, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 21, SYCoord + 34, SXCoord + 22, SYCoord + 34, 0x0000);
  VGA_box(SXCoord + 9, SYCoord + 35, SXCoord + 22, SYCoord + 35, 0x0000);
  VGA_box(SXCoord + 10, SYCoord + 36, SXCoord + 14, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 17, SYCoord + 36, SXCoord + 21, SYCoord + 36, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 37, SXCoord + 13, SYCoord + 37, 0x0000);
  VGA_box(SXCoord + 18, SYCoord + 37, SXCoord + 20, SYCoord + 37, 0x0000);
  VGA_box(SXCoord + 12, SYCoord + 38, SXCoord + 19, SYCoord + 38, 0x0000);
  VGA_box(SXCoord + 11, SYCoord + 34, SXCoord + 20, SYCoord + 34, 0xFFFF);
  VGA_box(SXCoord + 15, SYCoord + 36, SXCoord + 16, SYCoord + 36, 0xFD79);
  VGA_box(SXCoord + 14, SYCoord + 37, SXCoord + 17, SYCoord + 37, 0xFD79);

  // Render Skin
  VGA_box(SXCoord + 6, SYCoord + 18, SXCoord + 25, SYCoord + 18, 0xF6DA);
  VGA_box(SXCoord + 5, SYCoord + 19, SXCoord + 26, SYCoord + 19, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 20, SXCoord + 9, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 22, SYCoord + 20, SXCoord + 27, SYCoord + 20, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 21, SXCoord + 7, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 21, SXCoord + 27, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 20, SXCoord + 18, SYCoord + 21, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 22, SXCoord + 6, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 22, SXCoord + 20, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 22, SXCoord + 27, SYCoord + 22, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 23, SXCoord + 27, SYCoord + 23, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 24, SXCoord + 17, SYCoord + 24, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 25, SXCoord + 13, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 4, SYCoord + 26, SXCoord + 7, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 6, SYCoord + 30, SXCoord + 6, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 30, SXCoord + 12, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 26, SXCoord + 13, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 27, SXCoord + 12, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 25, SXCoord + 27, SYCoord + 25, 0xF6DA);
  VGA_box(SXCoord + 18, SYCoord + 26, SXCoord + 19, SYCoord + 26, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 27, SXCoord + 19, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 19, SYCoord + 30, SXCoord + 20, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 25, SYCoord + 30, SXCoord + 25, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 24, SYCoord + 26, SXCoord + 27, SYCoord + 29, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 27, SXCoord + 17, SYCoord + 30, 0xF6DA);
  VGA_box(SXCoord + 13, SYCoord + 31, SXCoord + 18, SYCoord + 31, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 32, SXCoord + 20, SYCoord + 32, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 37, SXCoord + 10, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 21, SYCoord + 37, SXCoord + 21, SYCoord + 37, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 38, SXCoord + 11, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 20, SYCoord + 38, SXCoord + 21, SYCoord + 38, 0xF6DA);
  VGA_box(SXCoord + 11, SYCoord + 39, SXCoord + 20, SYCoord + 40, 0xF6DA);
  VGA_box(SXCoord + 10, SYCoord + 41, SXCoord + 21, SYCoord + 41, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 42, SXCoord + 17, SYCoord + 44, 0xF6DA);
  VGA_box(SXCoord + 12, SYCoord + 45, SXCoord + 19, SYCoord + 46, 0xF6DA);
  VGA_box(SXCoord + 14, SYCoord + 47, SXCoord + 17, SYCoord + 48, 0xF6DA);

  // Render Tears
  VGA_box(SXCoord + 7, SYCoord + 30, SXCoord + 10, SYCoord + 30, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 32, SXCoord + 10, SYCoord + 32, 0x9EDD);
  VGA_box(SXCoord + 6, SYCoord + 33, SXCoord + 9, SYCoord + 33, 0x9EDD);
  VGA_box(SXCoord + 6, SYCoord + 34, SXCoord + 8, SYCoord + 34, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 35, SXCoord + 8, SYCoord + 35, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 36, SXCoord + 9, SYCoord + 36, 0x9EDD);
  VGA_box(SXCoord + 6, SYCoord + 37, SXCoord + 9, SYCoord + 38, 0x9EDD);
  VGA_box(SXCoord + 7, SYCoord + 39, SXCoord + 10, SYCoord + 39, 0x9EDD);
  VGA_box(SXCoord + 8, SYCoord + 40, SXCoord + 10, SYCoord + 40, 0x9EDD);
  VGA_box(SXCoord + 9, SYCoord + 41, SXCoord + 9, SYCoord + 41, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 30, SXCoord + 24, SYCoord + 30, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 32, SXCoord + 24, SYCoord + 32, 0x9EDD);
  VGA_box(SXCoord + 22, SYCoord + 33, SXCoord + 25, SYCoord + 33, 0x9EDD);
  VGA_box(SXCoord + 23, SYCoord + 34, SXCoord + 25, SYCoord + 34, 0x9EDD);
  VGA_box(SXCoord + 23, SYCoord + 35, SXCoord + 24, SYCoord + 35, 0x9EDD);
  VGA_box(SXCoord + 22, SYCoord + 36, SXCoord + 24, SYCoord + 36, 0x9EDD);
  VGA_box(SXCoord + 22, SYCoord + 37, SXCoord + 25, SYCoord + 38, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 39, SXCoord + 24, SYCoord + 39, 0x9EDD);
  VGA_box(SXCoord + 21, SYCoord + 40, SXCoord + 23, SYCoord + 40, 0x9EDD);
  VGA_box(SXCoord + 22, SYCoord + 41, SXCoord + 22, SYCoord + 41, 0x9EDD);

  // Render Shirt
  VGA_box(SXCoord + 10, SYCoord + 45, SXCoord + 11, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 20, SYCoord + 45, SXCoord + 21, SYCoord + 46, 0x2589);
  VGA_box(SXCoord + 8, SYCoord + 47, SXCoord + 13, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 18, SYCoord + 47, SXCoord + 23, SYCoord + 48, 0x2589);
  VGA_box(SXCoord + 10, SYCoord + 49, SXCoord + 21, SYCoord + 50, 0x2589);
  VGA_box(SXCoord + 14, SYCoord + 51, SXCoord + 17, SYCoord + 52, 0x2589);
}
