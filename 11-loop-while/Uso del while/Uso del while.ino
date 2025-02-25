int potPin = A1, ledPin = 2, potVal, dt = 400;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(dt);

  while (potVal > 1000) {///Si el valor es mayor de 1000 entonces hara que el led encienda
    digitalWrite(ledPin, HIGH);
    Serial.println(potVal);
    potVal = analogRead(potPin);
    delay(dt);
  }
  digitalWrite(ledPin, LOW);

}