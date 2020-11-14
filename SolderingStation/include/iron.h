#ifndef IRON.H
#define IRON.H

#include <stdint.h.>

void heaterControl();
void heater(uint8_t val);


uint16_t tempLiniear(int tempLiniear);
uint16_t tempMap(int tempMap);
uint16_t getTemperature(void);

#endif