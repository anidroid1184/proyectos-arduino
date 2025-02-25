int buzzpin = 4, buzzdelay = 10000000, analogpin = A0, read;
void setup() {
  pinMode(buzzpin, OUTPUT);
  pinMode(analogpin, INPUT);
  Serial.begin(9600);
}

void loop() {

  read = analogRead(analogpin);
  buzzdelay = (9940. / 1023.) * read + 60;

  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(buzzdelay);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(buzzdelay);

  Serial.println(read);
}