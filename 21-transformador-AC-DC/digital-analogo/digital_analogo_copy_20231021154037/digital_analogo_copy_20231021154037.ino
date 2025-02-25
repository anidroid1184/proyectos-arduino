//variables
int pinentrada = 47, volmax = 1, factordeescala = 80, resolucion = 1023, delayse = 5000, lectura = 0;
int ledrojo= 50, ledama=51, ledver=48;
void setup() {
  pinMode(pinentrada, INPUT);//recibimos la señal del arduino uno
  pinMode(ledrojo,OUTPUT);
  pinMode(ledama,OUTPUT);
  pinMode(ledver,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lectura = digitalRead(pinentrada);//leemos la señal
  float valoranalogo = map(lectura, 0, 255, 0, 1023);  //conversor de digital a analogo
  float conanalogo= analogRead(valoranalogo);//leemos el valor analogo
  float voltaje = (conanalogo * volmax) / resolucion;//obtebemos el valor del voltaje
  float temp = voltaje * factordeescala;//obtenemos el valor de la temperatura
  Serial.print(lectura);
  Serial.print("DC-AC");
  Serial.println(" ");
  Serial.print(temp);
  Serial.print("C°");
  Serial.println(" ");
  Serial.print(voltaje);
  Serial.print("V");
  Serial.println(" ");
  delay(delayse);
  if(temp>=40){
    digitalWrite(ledrojo,HIGH);
    digitalWrite(ledama,LOW);
    digitalWrite(ledver,LOW);
  }
  if(temp<40 && temp>=30){
    digitalWrite(ledama,HIGH);
    digitalWrite(ledrojo,LOW);
    digitalWrite(ledver,LOW);

  }
   if(temp<30 && temp>=10){
    digitalWrite(ledver,HIGH);
    digitalWrite(ledrojo,LOW);
    digitalWrite(ledama,LOW);

  }

}
