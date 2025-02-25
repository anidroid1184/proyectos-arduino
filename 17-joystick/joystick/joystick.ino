const int pinLM35 = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(pinLM35);
  float voltage = (sensorValue / 1024.0) * 5000;
  float temperatureC = voltage / 10;

  Serial.println(temperatureC);
  delay(1000);
}