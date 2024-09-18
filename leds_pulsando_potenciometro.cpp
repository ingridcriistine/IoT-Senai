int azul = 3;
int laranja = 5;
int pot = A5;
int tempo = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(azul, OUTPUT);
  pinMode(laranja, OUTPUT);
  pinMode(analogRead(pot), INPUT);
}

void loop()
{ 
  tempo = map(analogRead(pot), 0, 1023, 10, 100);
  Serial.println(tempo);

  int j = 255;
  for(int i = 0; i < 255; i+=10) {
    analogWrite(azul, i);
    analogWrite(laranja, j);
    delay(tempo); 
    analogWrite(azul, i);
    analogWrite(laranja, j);
    delay(tempo);	
    j-=10;
  }
  
  j = 0;
  for(int i = 255; i > 0; i-=10) {
    analogWrite(azul, i);
    analogWrite(laranja, j);
    delay(tempo); 
    analogWrite(azul, i);
    analogWrite(laranja, j);
    delay(tempo);	
    j+=10;
  }
}
