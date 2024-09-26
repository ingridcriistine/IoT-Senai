#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int op = 0;
int v1 = 0;
int v2 = 0;
float r = 0;
String sinal;

  
void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  
  pinMode(analogRead(pot1), INPUT);
  pinMode(analogRead(pot2), INPUT);
  pinMode(analogRead(pot3), INPUT);
}

void loop()
{
  op = map(analogRead(pot1), 0, 1023, 1, 5);
  v1 = map(analogRead(pot2), 0, 1023, 1, 99);
  v2 = map(analogRead(pot3), 0, 1023, 1, 99);
  delay(1000);
  
  switch(op) {
	case 1:
    	lcd.clear();
  		lcd.setCursor(2, 0);
    	lcd.print("Escolha uma");
    	lcd.setCursor(4, 1);
    	lcd.print("operacao");
    	break;
    
    case 2:
    	lcd.clear();
  		lcd.setCursor(6, 0);
    	lcd.print("Soma");
    
    	r = v1 + v2;
    	sinal = " + ";
    	break;
    
    case 3:
    	lcd.clear();
  		lcd.setCursor(3, 0);
    	lcd.print("Subtracao");
    
    	r = v1 - v2;
    	sinal = " - ";
    	break;
    
    case 4:
    	lcd.clear();
  		lcd.setCursor(1, 0);
    	lcd.print("Multiplicacao");
    
    	r = v1 * 2;
    	sinal = " x ";
    	break;
    
    case 5:
    	lcd.clear();
  		lcd.setCursor(4, 0);
    	lcd.print("Divisao");
    
    	r = float(v1) / v2;
    	sinal = " / ";
    	break;
  }
  
  if(op != 1) {
  	lcd.setCursor(1, 1);
    lcd.print(v1);
    lcd.print(sinal);
    lcd.print(v2);
    lcd.print(" = ");
    lcd.print(r);
  }
}
