/*
  This Library is written for PCF8574 I2C IO expander
  Author: Bonezegei (Jofel Batutay)
  Date:  November 2023 
  Updated: Jan 15 2024
*/
#include "Bonezegei_PCF8574.h"

Bonezegei_PCF8574::Bonezegei_PCF8574() {
}

Bonezegei_PCF8574::Bonezegei_PCF8574(uint8_t addr) {
  _addr = addr;
}

char Bonezegei_PCF8574::begin() {
  if (Wire.begin()) {
    return 1;
  } else {
    return 0;
  }
}

uint8_t Bonezegei_PCF8574::read() {
  Wire.requestFrom(_addr | 0x01, 1);

  while (Wire.available()) {
    p_read = Wire.read();
  }
  return p_read;
}

void Bonezegei_PCF8574::write(uint8_t data) {
  Wire.beginTransmission(_addr);
  p_write = data;
  Wire.write(data);
  Wire.endTransmission();
}
