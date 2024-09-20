// 1 - desliga
// 2 - pisca devagar
// 3 - pisca rápido

int vermelho = 6;
int amarelo = 3;
int verde = 5;
int btn = 4;
int btnState = 0;
int atualState = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{
  btnState = digitalRead(btn);
  
  if(digitalRead(btn) == 1) {
    delay(50);
  	atualState += 1;
  }
  if(atualState > 3) {
  	atualState = 1;
  }

  if(atualState == 1) {
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, LOW);
  }

  else if(atualState == 2) {
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(amarelo, HIGH);
    delay(1000);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, LOW);
    delay(1000);
  }

  else {
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, HIGH);
    digitalWrite(amarelo, HIGH);
    delay(100);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, LOW);
    delay(100);
  }
  
  Serial.println(atualState);
}
