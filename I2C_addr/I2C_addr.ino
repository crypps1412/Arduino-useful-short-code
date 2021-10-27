#include <Wire.h>

void setup() {
  Serial.begin(9600);
  Wire.begin();
  delay(1000);
  Serial.println();
  Serial.println("Address I2C:");
  for (int addr = 1; addr < 127; addr++) {
    Wire.beginTransmission(addr);
    if (!Wire.endTransmission()) {
      Serial.print("0x");
      Serial.print(addr, HEX);
      Serial.print(" 0b");
      Serial.println(addr, BIN);
    }
  }
  Serial.println("Finish!");
}

void loop() {}
