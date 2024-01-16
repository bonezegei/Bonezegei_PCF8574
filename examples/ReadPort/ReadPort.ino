/*
  Read Port
  Author: Bonezegei (Jofel Batutay)
  Date:  January 2024
*/

#include <Bonezegei_PCF8574.h>

Bonezegei_PCF8574 io(0x27);

void setup() {
  Serial.begin(115200);
  io.begin();
}

void loop() {
  Serial.printf("Port:%x \n" , io.read());  //Read IO
  delay(1000);
}
