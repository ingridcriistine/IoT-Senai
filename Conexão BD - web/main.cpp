#include <Arduino.h>

int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop()
{
    digitalWrite(led1, HIGH);
    delay(1000);	
}
