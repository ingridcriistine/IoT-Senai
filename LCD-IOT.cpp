#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte simbolo1[8]{
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111
};

byte simbolo2[8]{
  B11111,
  B11111,
  B11111,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000
};

byte simbolo3[8]{
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11111,
  B11111
};

byte simbolo4[8]{
  B10000,
  B11000,
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111
};

byte simbolo5[8]{
  B00001,
  B00011,
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111
};

byte simbolo6[8]{
  B11111,
  B11111,
  B11111,
  B11111,
  B01111,
  B00111,
  B00011,
  B00001
};

byte simbolo7[8]{
  B11111,
  B11111,
  B11111,
  B11111,
  B11110,
  B11100,
  B11000,
  B10000
};
  

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.createChar(1, simbolo1);
  lcd.createChar(2, simbolo2);
  lcd.createChar(3, simbolo3);
  lcd.createChar(4, simbolo4);
  lcd.createChar(5, simbolo5);
  lcd.createChar(6, simbolo6);
  lcd.createChar(7, simbolo7);
}

void loop()
{
  lcd.setCursor(4, 0);
  lcd.write(1);
  delay(500);
  lcd.setCursor(4, 1);
  lcd.write(1);
  delay(500);
  
  lcd.setCursor(6, 0);
  lcd.write(5);
  delay(500);
  lcd.setCursor(6, 1);
  lcd.write(6);
  delay(500);
  
  lcd.setCursor(7, 0);
  lcd.write(2);
  delay(500);
  lcd.setCursor(7, 1);
  lcd.write(3);
  delay(500);
  
  lcd.setCursor(8, 0);
  lcd.write(4);
  delay(500);
  lcd.setCursor(8, 1);
  lcd.write(7);
  delay(500);
  
  lcd.setCursor(10, 0);
  lcd.write(2);
  delay(500);
  lcd.setCursor(11, 0);
  lcd.write(1);
  delay(500);
  lcd.setCursor(11, 1);
  lcd.write(1);
  delay(500);
  lcd.setCursor(12, 0);
  lcd.write(2);
  delay(500);

}
