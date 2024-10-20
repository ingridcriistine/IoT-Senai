int buzzer = 8;//Atribui o valor 8 a variável buzzer, que representa o pino digital 8, onde o buzzer está conectado
int i = 0;//Variável para contar o número de vezes que o buzzer tocou
int botao = 2;

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(buzzer, OUTPUT);//Definindo o pino buzzer como de saída.
}

void loop() {
  /*for (i; i < 5; i++) {//Para i, enquanto i for menor que 5, realize o código e incremente 1 em i
    tone(buzzer, 1500);//Ligando o buzzer com uma frequência de 1500 Hz.
    delay(500);//Intervalo de 500 milissegundos
    noTone(buzzer);//Desligando o buzzer.
    delay(500);//Intervalo de 500 milissegundos
  }*/
  
  if(digitalRead(botao) == 1) {
	 delay(2000);
    tone(buzzer,262,200); //DO
    delay(200);
    tone(buzzer,294,300); //RE
    delay(200);
    tone(buzzer,330,300); //MI
    delay(200);
    tone(buzzer,349,300); //FA
    delay(300);
    tone(buzzer,349,300); //FA
    delay(300);
    tone(buzzer,349,300); //FA
    delay(300);
    tone(buzzer,262,100); //DO
    delay(200);
    tone(buzzer,294,300); //RE
    delay(200);   
    tone(buzzer,262,100); //DO
    delay(200);
    tone(buzzer,294,300); //RE
    delay(300);
    tone(buzzer,294,300); //RE
    delay(300);
    tone(buzzer,294,300); //RE
    delay(300);
    tone(buzzer,262,200); //DO
    delay(200);
    tone(buzzer,392,200); //SOL
    delay(200);
    tone(buzzer,349,200); //FA
    delay(200);
    tone(buzzer,330,300); //MI
    delay(300);
    tone(buzzer,330,300); //MI
    delay(300);
    tone(buzzer,330,300); //MI
    delay(300);
    tone(buzzer,262,200); //DO
    delay(200);
    tone(buzzer,294,300); //RE
    delay(200);
    tone(buzzer,330,300); //MI
    delay(200);
    tone(buzzer,349,300); //FA
    delay(300);
    tone(buzzer,349,300); //FA
    delay(300);
    tone(buzzer,349,300); //FA
    delay(300);
  }
  else {
    noTone(buzzer);
  }
  
  Serial.println(digitalRead(botao));
}
