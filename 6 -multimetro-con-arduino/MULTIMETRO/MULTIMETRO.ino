int analogpin = A0, pinv=A1 ,volpin=255 , time=500, analogval ;
float v2,vol;
void setup() {
  //Tarjeta arduino como vultimetro 
 pinMode(analogpin, INPUT);//Para recibir señales
 pinMode(pinv, OUTPUT);//sacar voltaje
//MONITOR DE ARDUINO
 Serial.begin(9600);//inicializacion de nuestro monitor
}

void loop() {
  analogWrite(pinv,volpin);//Usamos el pin analogico A1 para alimentar
  analogval = analogRead(analogpin);//Lectura analogica
  delay(time);
  v2 = (5.0*analogval)/1023;
  delay(time);
  Serial.println(v2);//imprimir el valor de v2 en el serial

}
