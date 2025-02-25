#include <Stepper.h>

// Define el número de pasos por revolución del motor (esto puede variar según el motor)
const int stepsPerRevolution = 2048;

// Conexiones de los pines del ULN2003 a los pines del Arduino
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Establece la velocidad del motor en RPM
  myStepper.setSpeed(10);
  // Inicia la comunicación serial para ver mensajes en el monitor
  Serial.begin(9600);
}

void loop() {
  // Gira el motor en sentido horario
  Serial.println("Giro en sentido horario");
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Gira el motor en sentido antihorario
  Serial.println("Giro en sentido antihorario");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
