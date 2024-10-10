#include <Arduino.h>

const int led = 2;
const int sensor = 3; 
 
void setup(){
  pinMode(sensor, INPUT); 
  pinMode(led, OUTPUT); 
  digitalWrite(led, LOW);
  Serial.begin(9600);
}
 
void loop(){
  if(digitalRead(sensor) == HIGH){
      digitalWrite(led, HIGH); 
      Serial.println("Ligado");
  }else{ 
    digitalWrite(led, LOW); 
    Serial.println("Desligado");
  }
}
