int sensorLuz = A0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int tensao = map(analogRead(sensorLuz), 0, 1023, 0, 5);
  Serial.println(tensao);
}
