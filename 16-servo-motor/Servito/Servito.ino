#include <Servo.h>
int servopin = 9, servopos = 180, time = 1;
Servo myServo;

void setup() {

  myServo.attach(servopin);
  Serial.begin(9600);
}

void loop() {


  for (servopos = 0; servopos <= 360; servopos++) {
    myServo.write(servopos);
    delay(time);
  
  }
  Serial.print("Que angulo quieres?");
  servopos = Serial.parseInt();
  myServo.write(servopos);
  delay(time);
}
