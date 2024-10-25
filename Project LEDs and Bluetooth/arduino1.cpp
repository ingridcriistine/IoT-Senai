#include <Arduino.h>
int potPin = A0; // Pino onde o potenciômetro está conectado
int potValue = 0; // Variável para armazenar o valor lido

void setup() {
  Serial.begin(115200); // Inicializa a comunicação serial
}
void loop() {
  potValue = analogRead(potPin); // Lê o valor do potenciômetro
  potValue = map(potValue,0,1023,0,5);
  Serial.println(potValue); // Envia o valor pela porta serial
  delay(1000); // Aguarda meio segundo antes de ler novamente
}
