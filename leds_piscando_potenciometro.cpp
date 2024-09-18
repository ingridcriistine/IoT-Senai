int vermelho = 2;
int verde = 4;
int amarelo = 6;
int pot = A0;
int tempo = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(analogRead(pot), INPUT);
}

void loop()
{
  tempo = map(analogRead(pot), 0, 1023, 10, 1000);
  int tensao = map(tempo, 0, 1023, 0, 5);
  Serial.println(tempo);
  Serial.print(tensao);
  Serial.println('V');
  
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, HIGH);
  delay(tempo); 
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  delay(tempo);	
}
