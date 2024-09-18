int azul = 3;
int laranja = 5;
int pot = A5;
int intensidade = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(azul, OUTPUT);
  pinMode(laranja, OUTPUT);
  pinMode(analogRead(pot), INPUT);
}

void loop()
{
  intensidade = map(analogRead(pot), 0, 1023, 0, 255);
  Serial.println(intensidade);
  
  analogWrite(azul, intensidade);
  analogWrite(laranja, 255 - intensidade);
  delay(100); 
}
