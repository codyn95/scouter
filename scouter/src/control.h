#ifndef CONTROL_H
#define CONTROL_H

#include "pins.h"
#include "Arduino.h"
#include "display.h"

static Display display;
void checkSerial();
void initHardware();

#endif