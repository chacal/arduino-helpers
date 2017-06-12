#pragma once

int readRawVccMilliVolts(uint8_t pin, float adcRefVoltage, long r1, long r2);


#if defined(ARDUINO_ARCH_AVR)

int readAtmegaInternalVcc();
void readAtmegaInternalVccToStr(char* buf);

#endif