#include "display.h"

Display::Display() {
    Serial.println("Starting u8g2...");
    u8g2.begin();

    test();

}

void Display::init() {
    u8g2.begin();
}

void Display::test() {
    Serial.println("Begin test");
    u8g2.firstPage();

    int randX = random(0,32);
    u8g2.drawBox(randX, randX, 10, 10);
    u8g2.setFont(u8g2_font_helvR12_tf);
    u8g2_uint_t length = u8g2.drawStr(0,20,"Hello World!");
    Serial.println(length);
    u8g2.sendBuffer();
}


void Display::centerText(String text, int startY) {

}
