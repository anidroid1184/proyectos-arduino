/*
Proyecto final
Nicol Zapata Londoño, Santiago Ordoñez, Juan Sebastian Valencia
Ingenieria electronica, segundo semestre
*/

#include <Servo.h>
#include <Stepper.h>
int delay1 = 30, delay2 = 30, gradosmo = 512, delay3 = 1000,GRADOS1=80,GRADOS2=90,GRADOS3=45;  //delay=tiempo de espera(milisegundos),gradosmo=grados que rota el motor
Servo servomotor3;                                            //Servomotor pinza
Servo servomotor2;                                            //Servomotor brazo
Servo servomotor1;                                            //Servomotor base
Stepper motor(2048, 4, 6, 5, 7);                              //motor rotatorio (rotacion, naranja, rojo, verde, amarillo);

void setup() {
  servomotor3.attach(11);  //inicializar servomotor pinza
  servomotor2.attach(10);  //inicializar servomotor brazo
  servomotor1.attach(9);   //inicializar servomotor base
  motor.setSpeed(10);      //inicializar motor rotatorio
}

void loop() {
  //Reinicio del ciclo para la posición inicial de los servomotores
  //posición inicial de los servomotores
  servomotor1.write(0);
  servomotor2.write(0);
  servomotor3.write(0);
  //motor.step(512);
  delay(delay1);
  //COJE EL OBJETO
  for (int i = 0; i <= GRADOS3; i++) {
    servomotor3.write(i);  //Hacer que el servomotor pinza se mueva gradualmente hasta 45 grados de la posición original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = 0; i <= GRADOS2; i++) {
    servomotor2.write(i);  //Hacer que el servomotor de brazo de mueva gradualmente hasta 90 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = 0; i <= GRADOS1; i++) {
    servomotor1.write(i);  //Hacer que el servomotor de base de mueva gradualmente hasta 90 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = GRADOS3; i >= 0; i--) {
    servomotor3.write(i);  //Hacer que el servomotor de pinza de mueva gradualmente hasta 45 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = GRADOS1; i >= 0; i--) {
    servomotor1.write(i);  //Hacer que el servomotor de base de mueva gradualmente hasta 90 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = GRADOS2; i >= 0; i--) {
    servomotor2.write(i);  //Hacer que el servomotor de brazo de mueva gradualmente hasta 90 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  //GIRA CON EL OBJETO
  motor.step(gradosmo);  //mover el motor de rotacion los grados que muetra la variable
  delay(delay1);
  //DEJA EL OBJETO
  for (int i = 0; i <= GRADOS2; i++) {
    servomotor2.write(i);  //Hacer que el servomotor de brazo de mueva gradualmente hasta 90 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = 0; i <= GRADOS1; i++) {
    servomotor1.write(i);  //Hacer que el servomotor de base de mueva gradualmente hasta 90 grados de la posicion original
    delay(delay2);         //tiempo de espera
  }
  delay(delay1);
  for (int i = 0; i <= GRADOS3
  ; i++) {
    servomotor3.write(i);  //Hacer que el servomotor pinza se mueva gradualmente hasta 45 grados de la posición original
    delay(delay2);
  }
  delay(delay1);
  //VUELVE A LA POSICION INICIAL
  servomotor1.write(0);
  servomotor2.write(0);
  servomotor3.write(0);
  motor.step(-gradosmo);
  delay(delay3);  //mayor tiempo de espera para reiniciar el ciclo
}