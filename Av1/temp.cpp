#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensor = A0;
float valorSensor = 0;
float temp = 0;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2); 
}

void loop()
{
  valorSensor = analogRead(sensor);
  temp = map(((valorSensor - 20) * 3.04), 0, 1023, -40, 125);
  
  Serial.println(temp);
  
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Temperatura: ");
  lcd.setCursor(5, 1);
  lcd.print(temp);
  lcd.setCursor(11, 1);
  lcd.print("C");
  delay(1000);
}


