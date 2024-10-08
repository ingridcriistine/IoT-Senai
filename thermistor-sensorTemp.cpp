#include "thermistor.h"
#include "HardwareSerial.h"

#define NTC_PIN               A0

THERMISTOR thermistor(NTC_PIN,        // Analog pin
                      10000,          // Nominal resistance at 25 ºC
                      3950,           // thermistor's beta coefficient
                      22000);         // Value of the series resistor

uint16_t temp;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  temp = thermistor.read();   // Read temperature

  Serial.print("Temp in 1/10 ºC : ");
  Serial.println(temp);

  delay(5000);
}
