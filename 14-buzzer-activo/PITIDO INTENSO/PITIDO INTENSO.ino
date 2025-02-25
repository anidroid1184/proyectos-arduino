int buzzPin = 8, potVal, potPin = A5, CONDI=1000;

void setup() {
 
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {


  potVal = analogRead(potPin);
  Serial.println(potVal);

  while (potVal>CONDI){
    digitalWrite(buzzPin, HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
  }
  digitalWrite(buzzPin, LOW);

}