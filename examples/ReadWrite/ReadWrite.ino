#include "Bonezegei_PCF8574.h"

Bonezegei_PCF8574 io(0x27);

void setup() {
  Serial.begin(115200);
  io.begin();
  io.write(0xa0);
  Serial.printf("data:%x" , io.read());
}

void loop() {
  io.write(0xa0);
  Serial.printf("data:%x \n" , io.read());
  delay(1000);

  io.write(0xa1);
  Serial.printf("data:%x \n" , io.read());
  delay(1000);
}
