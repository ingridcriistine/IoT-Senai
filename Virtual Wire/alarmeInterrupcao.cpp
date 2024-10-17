int ledAmarelo = 11;
int ledVerde = 12;
int BOTAO = 3;

byte estado_led = LOW;
byte estado_led_verde = HIGH;


void setup() {
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(BOTAO, INPUT);
  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(BOTAO), blink_led, RISING);
  //attachInterrupt(digitalPinToInterrupt(BOTAO), blink_led, FALLING);
  //attachInterrupt(digitalPinToInterrupt(BOTAO), blink_led, CHANGE);
  //attachInterrupt(digitalPinToInterrupt(BOTAO), blink_led, LOW);
}

void loop(){
  digitalWrite(ledAmarelo, estado_led);
  digitalWrite(ledVerde, estado_led_verde);
}

void blink_led(){
  estado_led = !estado_led;
  estado_led_verde = !estado_led_verde;

  Serial.println("Alarme de Intrusão");

}
