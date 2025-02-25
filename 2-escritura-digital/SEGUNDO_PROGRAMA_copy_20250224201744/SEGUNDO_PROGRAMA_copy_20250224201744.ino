//Este void se ejecuta una sola vez
void setup() {
  //Programa esta en c
  pinMode(13,OUTPUT); // Quiere decir que enviaremos informacion al pin 13, en este caso el pin 13 tiene el led


}
//Este void se ejecuta multiples veces
void loop() {
  digitalWrite(13,HIGH);  // Escritura digital, (pin13, estado alto)
  delay(10);//Esperar en ms
  digitalWrite(13,LOW); //Bajo
  delay(10);//Prender y apagar cada segundo 

}
