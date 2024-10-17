  #include <Arduino.h>
#include <VirtualWire.h>

uint8_t buf[VW_MAX_MESSAGE_LEN];
uint8_t buflen = VW_MAX_MESSAGE_LEN;
int led = 8;
void setup() {
 vw_set_rx_pin(6);

 Serial.begin(9600);
 Serial.println("setup");
 vw_set_ptt_inverted(true);
 vw_setup(2000);
 vw_rx_start();

}

void loop() {

  if(vw_get_message(buf, &buflen)){
    digitalWrite(13, true);
    Serial.println("recebendo");
    Serial.println(buf[0]);
    digitalWrite(13, false);

    analogWrite(led, buf[0]);
  }
}
