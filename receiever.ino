void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int received = analogRead(A1);
  float voltage = received * (5.0/1023.0);
  // Serial.println(received);
  Serial.println(voltage);
}
