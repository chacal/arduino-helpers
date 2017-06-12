#include <Arduino.h>
#include "VCC.h"

int readRawVccMilliVolts(uint8_t pin, float adcRefVoltage, long r1, long r2) {
  // Read and wait to get the ADC settled
  analogRead(pin);
  delayMicroseconds(100);
  int sensorValue = analogRead(pin);
  float voltageAtPin = sensorValue * (adcRefVoltage / 1023.0);
  int externalVoltageInMilliVolts = (r1 + r2) / (float)r2 * voltageAtPin * 1000;
  return externalVoltageInMilliVolts;
}
