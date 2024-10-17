#include <Arduino.h>

//==== Inclusão de bibliotecas ====//
//site arduino portugal
//porta com driver CH340

int x = 0;

#include <VirtualWire.h>

void setup()
{
    vw_set_tx_pin(6);
    Serial.begin(9600);
    Serial.println("setup");
    vw_set_ptt_inverted(true);
    vw_setup(2000);
    pinMode(2, INPUT);
}

void loop()
{
    if(digitalRead(2) == HIGH) {
      if(x < 255) {
        x += 20;
      } else {
        x = 0;
      }
    } 

    Serial.println(x);

    vw_send((uint8_t*)&x, 1);
    vw_wait_tx();
    delay(50);

}//endLoop
