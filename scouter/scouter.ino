#include "src/control.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(2500);
  initHardware();

}

void loop() {
  // put your main code here, to run repeatedly:
  checkSerial();
}
