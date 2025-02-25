int pin1=9,brilloled=50,brilloled1=100,brilloled2=150,brilloled3=200,brilloled4=255,wait=750;
void setup() { 
  pinMode(pin1,OUTPUT);
}

void loop() {
  analogWrite(pin1,brilloled);//Esta función tiene valores desde 0-255
  delay(wait);
  analogWrite(pin1,brilloled1);//Esta función tiene valores desde 0-255
  delay(wait);
  analogWrite(pin1,brilloled2);//Esta función tiene valores desde 0-255
  delay(wait);
  analogWrite(pin1,brilloled3);//Esta función tiene valores desde 0-255
  delay(wait);
  analogWrite(pin1,brilloled4);//Esta función tiene valores desde 0-255
  delay(wait);
  

}
