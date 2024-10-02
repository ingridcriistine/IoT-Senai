#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte simbolo1[8]{
    B11110,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11110
};

byte simbolo2[8]{
    B01111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B01111
};

byte simbolo3[8]{
    B11111,
    B11111,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
};

byte simbolo4[8]{
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11111,
    B11111
};

byte simbolo5[8]{
    B01111,
    B00111,
    B00000,
    B00000,
    B00000,
    B00000,
    B00011,
    B00111
};

byte simbolo6[8]{
  	B11111,
    B11111,
    B00000,
    B00000,
    B00000,
    B00000,
  	B11111,
    B11111
};

byte simbolo7[8]{
	B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00111,
    B01111
};

byte simbolo8[8]{
	B11110,
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B11000,
    B11100
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
  lcd.createChar(8, simbolo8);
}

void loop()
{
  //0
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //1
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
  
  lcd.clear();
  
  //2
  lcd.setCursor(7, 0);
  lcd.write(5);
  lcd.setCursor(8, 0);
  lcd.write(6);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 1);
  lcd.write(4);
  delay(500);
  
  lcd.clear();
  
  //3
  lcd.setCursor(7, 0);
  lcd.write(5);
  lcd.setCursor(7, 1);
  lcd.write(7);
  lcd.setCursor(8, 0);
  lcd.write(6);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //4
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //5
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(7);
  lcd.setCursor(8, 0);
  lcd.write(6);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(8);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //6
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(6);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(8);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //7
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(3);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //8
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(2);
  lcd.setCursor(8, 0);
  lcd.write(6);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();
  
  //9
  lcd.setCursor(7, 0);
  lcd.write(2);
  lcd.setCursor(7, 1);
  lcd.write(7);
  lcd.setCursor(8, 0);
  lcd.write(6);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(9, 0);
  lcd.write(1);
  lcd.setCursor(9, 1);
  lcd.write(1);
  delay(500);
 
  lcd.clear();

}
