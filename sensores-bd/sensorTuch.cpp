#include <Arduino.h>

int sensorTouch = 2;
int led = 3;

void setup() {
  pinMode(sensorTouch, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(sensorTouch) == HIGH) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
  
  delay(2000);
}
