/**
 * Project: arduino-ad-mux-lib
 * Version: 1.0
 * Source: https://github.com/stechio/arduino-ad-mux-lib.git
 *
 * Copyright (c) 2018 Stefano Chizzolini
 *
 * License:
 *    This library is licensed under the MIT license
 *    http://www.opensource.org/licenses/mit-license.php
 *
 * Filename: Type4051Mux.h
 * Author: Stefano Chizzolini
 */

#ifndef Type4051Mux_h
#define Type4051Mux_h

#include <Arduino.h>
#include <Mux.h>

class Type4051Mux : public Mux {
public:
  /*
   * Creates a Type4051Mux instance.
   *
   * Arguments:
   *    selectionPin0 - MCU pin to which the mux selection pin A connects.
   *    selectionPin1 - (Optional) MCU pin to which the mux selection pin B connects.
   *    selectionPin2 - (Optional) MCU pin to which the mux selection pin C connects.
   */
  Type4051Mux(uint8_t selectionPin0, int8_t selectionPin1 = UNDEFINED, int8_t selectionPin2 =
      UNDEFINED);
  /*
   * Creates a Type4051Mux instance.
   *
   * Arguments:
   *    signalPin - MCU pin to which the mux signal pin connects.
   *    signalMode - {INPUT, OUTPUT, INPUT_PULLUP}
   *    signalType - {DIGITAL, ANALOG}
   *    selectionPin0 - MCU pin to which the mux selection pin A connects.
   *    selectionPin1 - (Optional) MCU pin to which the mux selection pin B connects.
   *    selectionPin2 - (Optional) MCU pin to which the mux selection pin C connects.
   */
  Type4051Mux(uint8_t signalPin, uint8_t signalMode, uint8_t signalType,
      uint8_t selectionPin0, int8_t selectionPin1 = UNDEFINED, int8_t selectionPin2 =
      UNDEFINED);

private:
};

#endif
