/*
  EZ_Light.h - EZ_Light Library
  Copyright (C) 2017 ZLiNKX  All rights reserved.
 
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  See file LICENSE.txt for further informations on licensing terms.
*/

#ifndef EZ_Light_h
#define EZ_Light_h

#include <inttypes.h>
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif


class EZ_Light
{
public:
  EZ_Light();
  EZ_Light(int latchPin, int clockPin, int dataPin);
  void digitalWrite(int pin, uint8_t v);
  void digitalWrite(int pin, uint8_t v, bool doShift);
  void doShiftOut();

private:
  void init(int latchPin, int clockPin, int dataPin);
  int latchPin;
  int clockPin;
  int dataPin;
  uint8_t data1;
  uint8_t data2;
};

void fastDigitalWrite(int pin, uint8_t signal);


#define DEFAULT_LATCH_PIN 8
#define DEFAULT_CLOCK_PIN 9
#define DEFAULT_DATA_PIN 12
#define REGISTER1_FIRST_PIN 20
#define REGISTER1_LAST_PIN 27
#define REGISTER2_FIRST_PIN 28
#define REGISTER2_LAST_PIN 35

#endif /* EZ_Light_h */

