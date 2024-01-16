/*
  Read and Write (LED connected on P0 will blink every second)
  Author: Bonezegei (Jofel Batutay)
  Date:  January 2024

  P0 connect an LED   (Output)
  P1 Conect a switch  (Input)
*/

#include <Bonezegei_PCF8574.h>

Bonezegei_PCF8574 io(0x27);

void setup() {
  Serial.begin(115200);
  io.begin();
}

void loop() {
  io.write(0xa0);                           //Write to IO
  Serial.printf("data:%x \n" , io.read());  //Read IO
  delay(1000);

  io.write(0xa1);
  Serial.printf("data:%x \n" , io.read());
  delay(1000);
}
