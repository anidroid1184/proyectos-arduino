float vOUT,volread=A1,analogval;
int ledpinrojo = 8,ledpinamarillo = 9, ledpinverde = 10;


void setup() {

  pinMode(volread,INPUT);//TOma como salida el valor del pin A1
  pinMode(ledpinverde,OUTPUT);
  pinMode(ledpinrojo, OUTPUT);//usar pin
  Serial.begin(9600);//Para poder mostrar le monitor Serie
  pinMode(ledpinamarillo, OUTPUT);//usar pin
}

void loop() {
  int time=50;//PAra el tiempo
  analogval = analogRead(volread);//PAra leer el voltaje del pin 
  vOUT=(5*analogval/1023);//regla de 3 para poder sacar el voltaje 
  Serial.print("El voltaje actual es:");
  Serial.print(vOUT);/*Mostrar el voltaje del pin*/ Serial.print(" Voltios");
  Serial.println(" ");
  if(vOUT==5.0){
      digitalWrite(ledpinrojo,HIGH);
      digitalWrite(ledpinverde,HIGH);
      digitalWrite(ledpinamarillo,HIGH);
  } else if (vOUT>=4.0 && vOUT<=4.9){
    int delayt =750;
    digitalWrite(ledpinrojo, HIGH);
    delay(delayt);
    digitalWrite(ledpinrojo,LOW);
    delay(delayt);
    Serial.print("Ojo con el voltaje que se quema este bombillo cucho...");
    delay(time);
  } else if(vOUT<4.0 && vOUT>2.5){
    int delaym = 250;
    digitalWrite(ledpinamarillo, HIGH);
    delay(delaym);
    digitalWrite(ledpinamarillo,LOW);
    delay(delaym);
    Serial.print("Tranquilidad, hemos regulado todo...");
    delay(time);
  } else if(vOUT<=2.5 && vOUT>1.0){
     int delaymn = 100;
    digitalWrite(ledpinverde, HIGH);
    delay(delaymn);
    digitalWrite(ledpinverde,LOW);
    delay(delaymn);

    delay(time);
  } else if(vOUT<=1.0 && vOUT>=0.1){
     int delaya = 50,i=0;
  
     digitalWrite(ledpinrojo, HIGH);
    delay(delaya);
    digitalWrite(ledpinrojo,LOW);
    delay(delaya);
    digitalWrite(ledpinamarillo, HIGH);
    delay(delaya);
    digitalWrite(ledpinamarillo,LOW);
    delay(delaya);
    digitalWrite(ledpinverde, HIGH);
    delay(delaya);
    digitalWrite(ledpinverde,LOW);
    delay(delaya);
    Serial.print("....No hay carga mano");
    delay(time);
  } else if(vOUT==0.0){
      digitalWrite(ledpinrojo,LOW);
      digitalWrite(ledpinverde,LOW);
      digitalWrite(ledpinamarillo,LOW);
  }

}