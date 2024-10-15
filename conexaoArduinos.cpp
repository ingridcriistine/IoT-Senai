bool status_led = 0;
byte button = 12;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  bool status_button = digitalRead(button);
  if(!status_button){
    status_led = !status_led;
    if(status_led) Serial.write('1');
    else Serial.write('0');
    delay(300);
  }
}
