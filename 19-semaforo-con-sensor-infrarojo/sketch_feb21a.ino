const int TRIGGER_PIN = 10;  // Pin digital conectado al pin Trig del sensor
const int ECHO_PIN = 9;    // Pin digital conectado al pin Echo del sensor
int pinrojo =11, pinverde=13, pinamarillo=12, esperainfra = 500; 
void setup() {
  Serial.begin(9600);  // Inicializar la comunicación serial
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(pinrojo,OUTPUT);
  pinMode(pinverde,OUTPUT);
  pinMode(pinamarillo,OUTPUT);
}

void loop() {
  // Generar un pulso de 10 microsegundos en el pin Trig para activar la medición
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // Medir el tiempo de ida y vuelta del pulso ultrasónico en el pin Echo
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calcular la distancia en centímetros
  float distancia = duration * 0.034 / 2;

  // Mostrar la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  if (distancia>=200){
    digitalWrite(pinrojo,HIGH);
    digitalWrite(pinamarillo,LOW);
    digitalWrite(pinverde,LOW);  
  } else  if (distancia>=100 && distancia<200){
    digitalWrite(pinamarillo,HIGH);
    digitalWrite(pinrojo,LOW);
    digitalWrite(pinverde,LOW); 
  }  else  if (distancia>=100 && distancia<200){
    digitalWrite(pinverde,HIGH);
    digitalWrite(pinrojo,LOW);
    digitalWrite(pinamarillo,LOW); 
  } 

  delay(esperainfra); // Esperar un momento antes de la siguiente medición
}

