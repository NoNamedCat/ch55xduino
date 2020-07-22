/*
  CMSIS_DAP



  created 2020
  by Deqing Sun for use with CH55xduino

  This example code is in the public domain.

*/


#ifndef USER_USB_RAM
#error "This example needs to be compiled with a USER USB setting"
#endif

#include "src/CMSIS_DAPusb/USBHID.h"



void setup() {
  USBInit();
}

void loop() {
  
}