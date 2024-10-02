#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int next = 1;
int prev = 0;
int temp = 0;
int primeiro = 0;
int segundo = 0;
int terceiro = 0;
int quarto = 0;

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

void n0(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos, 1);
    lcd.write(2);
    lcd.setCursor(pos+1, 0);
    lcd.write(3);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n1(int pos) {
	lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n2(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(5);
    lcd.setCursor(pos+1, 0);
    lcd.write(6);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos, 1);
    lcd.write(2);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 1);
    lcd.write(4);
}

void n3(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(5);
    lcd.setCursor(pos, 1);
    lcd.write(7);
    lcd.setCursor(pos+1, 0);
    lcd.write(6);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n4(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos+1, 0);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n5(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos, 1);
    lcd.write(7);
    lcd.setCursor(pos+1, 0);
    lcd.write(6);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(8);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n6(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos, 1);
    lcd.write(2);
    lcd.setCursor(pos+1, 0);
    lcd.write(6);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(8);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n7(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos+1, 0);
    lcd.write(3);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n8(int pos) {
	lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos, 1);
    lcd.write(2);
    lcd.setCursor(pos+1, 0);
    lcd.write(6);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void n9(int pos) {
    lcd.setCursor(pos, 0);
    lcd.write(2);
    lcd.setCursor(pos, 1);
    lcd.write(7);
    lcd.setCursor(pos+1, 0);
    lcd.write(6);
    lcd.setCursor(pos+1, 1);
    lcd.write(4);
    lcd.setCursor(pos+2, 0);
    lcd.write(1);
    lcd.setCursor(pos+2, 1);
    lcd.write(1);
}

void numeros(int pos, int num) {

  switch(num) {
    case 0:
    	n0(pos);
    	break;
  	case 1:
    	n1(pos);
    	break;
    case 2:
    	n2(pos);
    	break;
    case 3:
    	n3(pos);
    	break;
    case 4:
    	n4(pos);
    	break;
    case 5:
    	n5(pos);
    	break;
    case 6:
    	n6(pos);
    	break;
    case 7:
    	n7(pos);
    	break;
    case 8:
    	n8(pos);
    	break;
    case 9:
    	n9(pos);
    	break;
  }
  
}

void loop()
{
  
  
  for(int i = 0; i < 18; i++) {
    	temp = prev + next;
      	next = prev;
      	prev = temp;
    	
    if (prev > 9 && prev < 99) {
      	primeiro = prev / 10;
      	segundo = prev % 10;
      
    	numeros(4, primeiro);
      	numeros(8, segundo);
    }
    else if (prev > 99 && prev < 999) {
      	primeiro = prev / 100;
      	segundo = (prev / 10) % 10;
      	terceiro = (prev % 100) / 10;
      
    	numeros(2, primeiro);
      	numeros(6, segundo);
      	numeros(10, terceiro);
    }
    else if (prev > 999) {
    	primeiro = prev / 1000;
      	segundo = (prev / 100) % 10;
      	terceiro = (prev % 1000) / 100;
        quarto = (prev % 1000) / 1000;
      
    	numeros(1, primeiro);
      	numeros(5, segundo);
      	numeros(9, terceiro);
      	numeros(13, quarto);
    }
    
    else {
    	numeros(7, prev);
    }
    
    delay(500);
    lcd.clear();
  }

}
