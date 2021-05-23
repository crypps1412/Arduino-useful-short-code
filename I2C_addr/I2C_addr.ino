#include <Wire.h>

void setup() {
  Serial.begin(57600);
  delay(1000);
  Serial.println();
  Serial.println("Address I2C:");
  for (int addr = 1; addr < 127; addr++) {
    Wire.beginTransmission(addr);
    if (!Wire.endTransmission()) {
      Serial.print("0x");
      Serial.println(addr, HEX);
    }
  }
  Serial.println("Finish!");
}

void loop() {}
