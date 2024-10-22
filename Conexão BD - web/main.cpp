#include <Arduino.h>

int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;

int valor;
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
    if (Serial.available())
    {
      //char valor = Serial.read();
      Serial.println(valor);
      if (valor == 1) {
            digitalWrite(led1, HIGH);
            delay(100);
            digitalWrite(led1, LOW); 
            delay(500);
        } else if (valor == 2) {
            digitalWrite(led2, HIGH);
            delay(100);
            digitalWrite(led2, LOW); 
            delay(500);
        } else if (valor == 3) {
            digitalWrite(led3, HIGH);
            delay(100);
            digitalWrite(led3, LOW); 
            delay(500);
        } else if (valor == 4) {
            digitalWrite(led4, HIGH);
            delay(100);
            digitalWrite(led4, LOW); 
            delay(500);
        } else if (valor == 5) {
            digitalWrite(led5, HIGH);
            delay(100);
            digitalWrite(led5, LOW); 
            delay(500);
        }
    } 
}
