#include <Arduino.h>

//==== Inclusão de bibliotecas ====//
#include <VirtualWire.h>

int led = 2;
String readString;
int light = 0;

void setup()
{
    vw_set_rx_pin(5);
    Serial.begin(9600);	// Debugging only
    Serial.println("setup");

    vw_set_ptt_inverted(true); // Required for DR3100
    vw_setup(2000);	 // Bits per sec

    vw_rx_start();       // Start the receiver PLL running
    pinMode(led, OUTPUT);
}

void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

    if (vw_get_message(buf, &buflen)) // Non-blocking
    {
        int i;

            digitalWrite(13, true); // Flash a light to show received good message
        // Message with a good checksum received, dump it.
        Serial.print("recebendo: ");
        
        for (i = 0; i < buflen; i++)
        {
            light += int(buf[i]);
        }

        digitalWrite(led, light);
        
        Serial.println(light);
        digitalWrite(13, false);

        delay(200);
    }
}
