#include "control.h"

void checkSerial() {
    while (Serial.available() > 0) {
        String input = Serial.readStringUntil('\r');
        input.trim();
        if (input.equals("R")) {
            // Rotate the damn screen
            Serial.println("Rotating screen");
            display.rotate();
        }
    }
}

void initHardware() {
    Serial.println("Initialize hardware");
    display.init();
}