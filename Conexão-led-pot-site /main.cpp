// 2
#include <Arduino.h>
//int valor = 0;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

byte valor;

void setup() {
  Serial.begin(115200);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);///
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  if(Serial.available()>0) {
    
    //char inByte = Serial.read();
    valor = Serial.parseInt();  // Lê até receber uma nova linha  
    //Serial.print("Recebido: ");
    //Serial.println(data);  // Imprime no monitor serial para ver o que foi recebido  
  }
  //delay(1000);
  //valor = map(valor,0,1023,0,500);
  //valor = 500;
   if(valor==0){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);

      // digitalWrite(7, LOW);
      digitalWrite(7, HIGH);



    }else if (valor==1)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);

      // digitalWrite(7, LOW);
      digitalWrite(7, HIGH);



    }else if (valor==2)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);

      // digitalWrite(7, LOW);
      digitalWrite(7, HIGH);


    }else if (valor==3)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);

      // digitalWrite(7, LOW);
      digitalWrite(7, HIGH);


    }else if (valor==4)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,LOW);

      digitalWrite(7, HIGH);

    }else
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,HIGH);

      digitalWrite(7, LOW);
    }
}
