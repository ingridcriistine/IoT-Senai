#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2); 
}

void loop()
{
  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Senai");
  delay(1000);
  lcd.clear();
  lcd.setCursor(5, 1);
  lcd.print("BOSCH");
  delay(1000);
}


