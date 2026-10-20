#include "display.h"

void displayInit() {
    Serial.println("Starting display...");

    bool result = display.begin();
    display.clearBuffer();
    display.clearDisplay();
    // display.setContrast(255);
    // _display.startWrite();
    test();
    // _display.endWrite();
}

void test() {
    Serial.println("Begin test");
    display.firstPage();

    int randX = random(0,32);
    display.drawBox(randX, randX, 10, 10);
    display.setFont(u8g2_font_helvR12_tf);
    u8g2_uint_t length = display.drawStr(0,20,"Hello World!");
    Serial.println(length);
    display.sendBuffer();
}

void displayRotate() {
    if (rotation = 0) {
        display.setDisplayRotation(U8G2_R1);
        rotation++;
    }
    else {
        display.setDisplayRotation(U8G2_R0);
        rotation = 0;
    }
    display.clearBuffer();
    display.clearDisplay();
    test();
    // _display.clearDisplay();
    // _display.startWrite();
    
    // _rotation++;
    // if (_rotation > 4) {
    //     _rotation = 0;
    // }
    // _display.setRotation(_rotation);
    // _display.drawString("Initializing...", 0, 0);
    // _display.endWrite();
}
