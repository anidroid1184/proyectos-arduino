//variables
int pinentrada = 26, volmax = 1, factordeescala = 90, resolucion = 1023, delayse = 2000, lectura = 0;

void setup() {
  pinMode(pinentrada, INPUT);//recibimos la señal del arduino uno
  Serial.begin(9600);
}

void loop() {
  lectura = digitalRead(pinentrada);//leemos la señal
  float valoranalogo = map(lectura, 0, 255, 0, 1023);  //conversor de digital a analogo
  float conanalogo= analogRead(valoranalogo);//leemos el valor analogo
  float voltaje = (conanalogo * volmax) / resolucion;//obtebemos el valor del voltaje
  float temp = voltaje * factordeescala;//obtenemos el valor de la temperatura
  Serial.print(lectura);
  Serial.print("ADC");
  Serial.println(" ");
  Serial.print(temp);
  Serial.print("C°");
  Serial.println(" ");
  Serial.print(voltaje);
  Serial.print("V");
  Serial.println(" ");
  delay(delayse);
}
