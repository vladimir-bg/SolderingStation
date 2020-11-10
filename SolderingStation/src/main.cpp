#include <Arduino.h>
#define termoCouple A3
#define A0 ambientCalibration
uint8_t heater = 10;
uint16_t temp;
uint8_t tempDealay = 10;
long timePass = millis();


void setup() {
  Serial.begin(9600);
  pinMode(heater, OUTPUT);
}

void loop() {
  if(timePass - millis() == tempDealay) {
    Serial.println(tempRead());
  }
  
  timePass = millis();
}

float tempRead() {
  uint16_t temp;
  for(int tempFilter = 0; tempFilter < 10; tempFilter++) {
    temp += analogRead(termoCouple);
  }
  temp = temp / 10;

  return temp;
}