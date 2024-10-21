#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int trig = 6; 
int echo = 7; 
float TempEcho = 0;
float VelocidadeSom = 0.000340;
float distancia = 0;

void setup()
{
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  pinMode(echo, INPUT); 
  Serial.begin(9600);
  lcd.begin(16,2); 
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  TempEcho = pulseIn(echo, HIGH);
  distancia = ((TempEcho*VelocidadeSom)/2)*100;
  Serial.println(distancia);
  
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("Distancia: ");
  lcd.setCursor(5, 1);
  lcd.print(distancia);
  lcd.setCursor(11, 1);
  lcd.print("cm");
  delay(2000);
}
