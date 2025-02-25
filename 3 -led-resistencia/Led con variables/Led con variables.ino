int dot=100,line=1000,ledPin=7,finaltime=5000;//Variable entera que representa el punto en el codigo morse
void setup() {
  pinMode(ledPin,OUTPUT);//Le decimos al programa que usaremos el pin 8 para alimentar el led


}

void loop() {
  //SOS en código morse
  //Primer intervalo de tiempo--Punto en codigo morse
  digitalWrite(ledPin,HIGH);//Encender el led
  delay(dot);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(dot);
  digitalWrite(ledPin,HIGH);//Encender el led
  delay(dot);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(dot);
  digitalWrite(ledPin,HIGH);//Encender el led
  delay(dot);

 
  //Segundo intervalo de tiempo-->Linea en codigo morse
   digitalWrite(ledPin,LOW);//Apagar el led
  delay(line);
  digitalWrite(ledPin,HIGH);//Encender el led
  delay(line);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(line);
   digitalWrite(ledPin,HIGH);//Encender el led
  delay(line);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(line);
   digitalWrite(ledPin,HIGH);//Encender el led
  delay(line);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(line);
  

  //Tercer intervalo de tiempo} digitalWrite(8,HIGH);//Encender el led
   digitalWrite(ledPin,HIGH);//Encender el led
  delay(dot);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(dot);
  digitalWrite(ledPin,HIGH);//Encender el led
  delay(dot);
  digitalWrite(ledPin,LOW);//Apagar el led
  delay(dot);
  digitalWrite(ledPin,HIGH);//Encender el led
  delay(dot);
  digitalWrite(ledPin,LOW);
  delay(dot);


  delay(finaltime);
  exit(0);




}
