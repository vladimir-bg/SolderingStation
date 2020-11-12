#include <Arduino.h>
#define termoCouple A3
#define A0 ambientCalibration
uint8_t heater = 10;
uint16_t tempValue;
uint8_t tempDealay = 10;
long timePass = millis();
uint8_t heaterTurnOffTime = 10;

float tempRead();

void setup() {
  Serial.begin(9600);
  pinMode(heater, OUTPUT);
}

void loop() {
  if(timePass - millis() == tempDealay) {
    delay(heaterTurnOffTime);
    digitalWrite(heater, LOW);
    tempValue = tempRead();
    Serial.println(tempValue);
  }
  if (tempValue < 220) {
    digitalWrite(heater, HIGH);
  } else 
    digitalWrite(heater, LOW);
  
  timePass = millis();
}

float tempRead() {
  uint16_t temp;
  for(int tempFilter = 0; tempFilter < 10; tempFilter++) {
    temp += analogRead(termoCouple);
  }
  temp = temp / 10;
  temp = (0.573 * temp) + (22.193);

  return temp;
}