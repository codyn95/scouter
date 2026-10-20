#ifndef DISPLAY_H
#define DISPLAY_H

#include <U8g2lib.h>
#include "pins.h"
#include <SPI.h>

static int DISP_WIDTH = 128;
static int DISP_HEIGHT = 64;
static int rotation = 0;
static U8G2_SSD1309_128X64_NONAME2_F_4W_SW_SPI display(U8G2_R0, DISP_SCL, DISP_SDA, DISP_CS, DISP_DC, DISP_RST);
// static U8G2_SSD1309_128X64_NONAME0_F_4W_HW_SPI display(U8G2_R0, DISP_CS, DISP_DC, DISP_RST);
void displayInit();


void test();
void center_text(String text, int startY);
void displayRotate();

#endif