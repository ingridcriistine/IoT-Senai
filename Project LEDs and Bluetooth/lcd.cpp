#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// int valor = 0;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
LiquidCrystal_I2C lcd(0x27, 20, 4);

byte valor;

void setup()
{

  Serial.begin(115200);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT); ///
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(7, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  if (Serial.available() > 0)
  {
    valor = Serial.parseInt(); // Lê até receber uma nova linha
  }
  if (valor == 0)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    // digitalWrite(7, LOW);
    digitalWrite(7, HIGH);
  }
  else if (valor == 1)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    // digitalWrite(7, LOW);
    digitalWrite(7, HIGH);
  }
  else if (valor == 2)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    // digitalWrite(7, LOW);
    digitalWrite(7, HIGH);
  }
  else if (valor == 3)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    // digitalWrite(7, LOW);
    digitalWrite(7, HIGH);
  }
  else if (valor == 4)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);

    digitalWrite(7, HIGH);
  }
  else
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);

    digitalWrite(7, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("LAMPADA LIGADA");
    lcd.setCursor(0, 1);
    lcd.print("VALORES: " + valor);

  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LAMPADA DESLIGADA");
  lcd.setCursor(0, 1);
  lcd.print("VALORES: " + valor);
  lcd.setCursor(0, 2);
  lcd.print("VALORES: " + valor);
  lcd.setCursor(0, 3);
  lcd.print("VALORES: " + valor);
}
