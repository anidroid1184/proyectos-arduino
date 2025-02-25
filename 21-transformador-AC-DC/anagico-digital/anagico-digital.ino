float analogo = 0, voltaje = 0, temp = 0;//Definincion de variables 
int analogpin = A0, digitalpin = 8, volmax = 5, factordeescala = 90, resolucion = 1023, valorDigital = 0;
void setup() {
  pinMode(analogpin, INPUT);  //Para recibir señales del LM35
  pinMode(digitalpin, OUTPUT);//Para sacar las señales al arduino mega
  //MONITOR DE ARDUINO
  Serial.begin(9600);  //inicializacion de nuestro monitor
}

void loop() {
  analogo = analogRead(A0);//lee el valor analogo del LM35
  voltaje = (analogo * volmax) / resolucion;//Convierte ese valor a voltaje
  temp = voltaje * factordeescala;//convierte ese valor a temperatura


  float valorDigital = map(analogo, 0, 1023, 0, 255);  //conversor de valor analogo a digital
  //mostrar los valores
  digitalpin = valorDigital;
  delay(4000);
  Serial.println(" ");
  Serial.print(temp);
  Serial.print("°C");
  Serial.println(" ");
  Serial.print(voltaje);
  Serial.print("V");
  Serial.println(" ");
  Serial.print(valorDigital);
  Serial.print("ADC");
  Serial.println(" ");
  delay(2000);
}
