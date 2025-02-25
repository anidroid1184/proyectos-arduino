float vOUT,volread=A1,analogval;


void setup() {
 pinMode(volread,INPUT);//TOma como salida el valor del pin A1
  Serial.begin(9600);//Para poder mostrar le monitor Serie
}

void loop() {
  int time=500;//PAra el tiempo
  analogval = analogRead(volread);//PAra leer el voltaje del pin 
  vOUT=(5*analogval/1023);//regla de 3 para poder sacar el voltaje 
  Serial.print("El voltaje actual es:");
  Serial.print(vOUT);/*Mostrar el voltaje del pin*/ Serial.print(" Voltios");
  Serial.println(" ");
  delay(time);//tiempo en espera

}
