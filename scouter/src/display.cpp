#include "display.h"

void Transparent_Display::init() {
    Serial.println("Starting display...");

    bool result = _display.init();
    Serial.println(result);
    // _display.startWrite();
    test();
    // _display.endWrite();
}

void Transparent_Display::test() {
    Serial.println("Begin test");
    _display.startWrite();
    _display.fillScreen(TFT_WHITE);
    _display.setTextSize(1);
    _display.drawString("Initializing...", 0, 0);
    _display.endWrite();    
}

void Transparent_Display::rotate() {
    _display.clearDisplay();
    _display.startWrite();
    
    _rotation++;
    if (_rotation > 4) {
        _rotation = 0;
    }
    _display.setRotation(_rotation);
    _display.drawString("Initializing...", 0, 0);
    _display.endWrite();
}
