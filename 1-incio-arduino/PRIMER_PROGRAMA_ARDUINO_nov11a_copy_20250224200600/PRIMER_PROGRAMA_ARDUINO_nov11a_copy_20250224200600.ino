//  Comenzamos el codigo con setup, se escribe una sola vez en todo el codigo
//  antes de todo y del setup debemos definir las variables
//  iniciamos codigo con -->void setup
void setup(){
  //  función para usar los pines del arduino, usamos el 13 porque esta conectado ahi el led de la placa
  //  Queremos encender el pin, entonces lo usamos como salida, OUTPUT
  pinMode(13, OUTPUT);
}
//  Ya tenemos seleccionado el pin 13, ahora vamos a escribir el codigo usando void loop
void loop(){
  digitalWrite(13, HIGH); // Digitalwrite coloca un nivel alto en el pin
  delay(50);//  Para poner nuestro intervalo en mili segundos
  digitalWrite(13, LOW);  //  Esto hace que se apague la salida al pasarlo a 0
  delay(50);
  //  Mientras la placa tenga alimentacion este programa va a ejecutar de manera indeterminada el void loop, comenzando desde 0
  exit(0);
}