#include <Arduino.h>

unsigned long currentTime = millis();
unsigned long previosTime = 0;
uint8_t timeForSample = 10;
uint8_t timeForRefresh = 200;
uint8_t timeForRefresh = 200;

void setup() {

}

void loop() {
  currentTime = millis();
  if(currentTime - previosTime == timeForSample) {
      
    previosTime = currentTime;
  } else if (currentTime - previosTime == timeForRefresh) {

  } 
}