/*
  This Library is written for PCF8574 I2C IO expander
  Author: Bonezegei (Jofel Batutay)
  Date:  November 2023 
  Updated: Jan 15 2024
*/

#ifndef _BONEZEGEI_PCF8574_H_
#define _BONEZEGEI_PCF8574_H_
#include <Arduino.h>
#include <Wire.h>

class Bonezegei_PCF8574 {
public:
  Bonezegei_PCF8574();
  Bonezegei_PCF8574(uint8_t addr);

  char begin();
  uint8_t read();
  void write(uint8_t data);

  uint8_t _addr;
  uint8_t p_read;  // temporary variable for read and write updates every read and write operation
  uint8_t p_write;
};

#endif
