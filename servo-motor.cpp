#include <Servo.h>
#include <Adafruit_LiquidCrystal.h>

Servo servo;
Adafruit_LiquidCrystal lcd_1(0);

int motor = 7;
int pot = A0;
int angulo = 0;

void setup()
{
  Serial.begin(9600);
  servo.attach(motor);
  pinMode(pot, INPUT);
  lcd_1.begin(16, 2);
}

void loop()
{
  angulo = map(analogRead(pot), 0, 1023, 0, 180);
  servo.write(angulo);
  Serial.println(angulo);
  
  lcd_1.clear();
  lcd_1.print(angulo);
  delay(100);
}
