#include <LiquidCrystal.h>

/* --------------COMANDOS PRINCIPAIS-----------------------
//12 Rs
//11 Rw
//10 E
//5,5,3,2 D0

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2)
lcd.begin(16,2) //16 colunas e 2 linhas
lcd.clear() //limpa a tela
lcd.setCursor(0, 0) //posição do início da escrita
lcd.print("") //o que será mostrado na tela

------------------------------------------------------------*/  
  
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
  
void setup()
{
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("DESENVOLVIMENTO DE SISTEMAS");
    
  lcd.setCursor(0, 1);
  lcd.print(". SENAI CENTRO .");
}

void loop()
{
  
}
