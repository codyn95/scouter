#ifndef DISPLAY_H
#define DISPLAY_H

#include <U8g2lib.h>
#include <SPI.h>
#include "pins.h"
static U8G2_SSD1309_128X64_NONAME2_F_4W_SW_SPI u8g2(U8G2_R0, DISP_SCL, DISP_SDA, DISP_CS, DISP_DC, DISP_RST);
class Display {
    
    private:
        
        const int WIDTH = 128;
        const int HIEGHT = 64;

        void rotate();
        void test();
        void centerText(String text, int posY);
    public:
        Display();
        void init();

        void setDist(float distance);
};


#endif