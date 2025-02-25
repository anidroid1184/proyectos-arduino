int greenPin = 12, redPin = 11, yellowPin = 13, time=1000;
String ledColor;
String msg1 = "Escribe un color de led, considera que solo tenemos verde, rojo y amarillo";


void setup() {

  Serial.begin(115200);  // Monitor serial con un valor distinto
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  Serial.println();
  Serial.println(msg1);  //Pide dato
  while (Serial.available() == 0) /*Mientras que  no se escriba nada en el monitor serial no hacer nada*/ {
  }

  ledColor = Serial.readString();  //Hacer que el string sea una lectura serial

  if (ledColor == "verde" || ledColor == "VERDE") /*Si la palabra ingresada es Verde entonces*/ {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    delay(time);
  } else if (ledColor == "rojo" || ledColor == "ROJO") /*Si la palabra ingresada es rojo*/ {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    delay(time);

  } else if (ledColor == "amarillo" || ledColor == "Amarillo") /*Si la palabra ingresada es amarillo entonces*/ {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(time);
  } else {
    Serial.println("errorm, escribe de forma clara, o todo en mayuscula o todo en minuscula");
    delay(time);
  }
}