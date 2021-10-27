#include <Servo.h>
Servo esc;
const int escPin = 11;

void setup() {
  esc.attach(escPin);
  Serial.begin(9600);
  Serial.setTimeout(100);
  esc.writeMicroseconds(1000);
  while(!Serial.available());
  Serial.readString();
}

int cmd = 1000;
void loop() {
  if (Serial.available()) {
    cmd = Serial.readString().toInt();
    esc.writeMicroseconds(cmd);
  }
  delay(50);
}
