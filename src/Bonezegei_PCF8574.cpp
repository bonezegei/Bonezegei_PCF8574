/*
  This Library is written for PCF8574 I2C IO expander
  Author: Bonezegei (Jofel Batutay)
  Date:  November 2023 
*/
#include "Bonezegei_PCF8574.h"

Bonezegei_PCF8574::Bonezegei_PCF8574() {
}

Bonezegei_PCF8574::Bonezegei_PCF8574(uint8_t addr) {
  _addr = addr;
}

char Bonezegei_PCF8574::begin() {
  if(){
    return 1;
  }
  else{
    return 0;
  }
}

uint8_t Bonezegei_PCF8574::read(){
  
}

void Bonezegei_PCF8574::write(uint8_t data){
  
}
