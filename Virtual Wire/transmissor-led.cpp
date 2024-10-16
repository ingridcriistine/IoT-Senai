#include <Arduino.h>


//==== Inclusão de bibliotecas ====//
#include <VirtualWire.h>

int led = 2;
byte light = 0;  

void setup()
{
    pinMode(led, OUTPUT);
    vw_set_tx_pin(5);
    Serial.begin(9600);	  // Debugging only
    Serial.println("setup");

    // Initialise the IO and ISR
    vw_set_ptt_inverted(true); // Required for DR3100
    vw_setup(2000);	 // Bits per sec
}

void loop()
{
    digitalWrite(13, true); // Flash a light to show transmitting
    vw_wait_tx(); // Wait until the whole message is gone
    digitalWrite(13, false);

    for(int i = 0; i < 255; i++){
        light += 1;
        vw_send((uint8_t *)light,light); 
        delay(200);
    }
    for(int j = 0; j < 255; j++){
        light -= 1;
        vw_send((uint8_t *)light, light); 
        delay(200);
    }
}//endLoop
