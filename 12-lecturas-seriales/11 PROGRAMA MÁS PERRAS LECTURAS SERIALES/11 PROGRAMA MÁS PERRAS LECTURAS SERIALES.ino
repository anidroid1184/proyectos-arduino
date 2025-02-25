int mynumber, brillito, ledpin = 2, time = 130;
String msg1 = "Porfavor ingresa un numero";  //Tipo string para decir algo
String msg2 = "Tu número (que me acabas de dar)es: ";

float radius;
float pi = 3.1415;
float area;
String msg3 = "Escribe el radio de tu circunferencia: ";
String msg4 = "El área de tu circunferencia es de: ";
void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Ingresa el numero de brillitos");
  //Serial.println(msg1);            //imprime el primer mensaje
  while (Serial.available() == 0) {  //mientras que en el campo no se haya escrito nada entonces esperamos
  }
  //mynumber = Serial.parseInt();//Analiza lo que se le digite y lo transforma en un entero
  //Serial.println(msg2);
  //Serial.println(mynumber);

  brillito = Serial.parseInt();  //contamos el numero de parpadeos que nos dieron
  //podemos usar tambien el parseFloat
  int i;
  for (i = 1; i < brillito; i++) {
    digitalWrite(ledpin, HIGH);
    delay(time);
    digitalWrite(ledpin, LOW);
    delay(time);
  }
  Serial.println();
  Serial.println(msg3);
  while (Serial.available() == 0) {
  }
  radius = Serial.parseFloat();
  area = pi * radius * radius;
  Serial.print(msg4);
  Serial.println(area);
}