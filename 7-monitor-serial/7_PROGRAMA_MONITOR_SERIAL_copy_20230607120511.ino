int i=0,wait=500,x=1,y=1;
float area, Pi = 3.1415;
int rad = 3;
String mensaje1 = "El area de un circulo con radio de ";
String mensaje2 = " es de: ";
void setup() {
  
  Serial.begin(9600);//Inicialisador de monitor serial

}

void loop() {
  int z=x+y;
    Serial.print("Mira-->X + y =");
    Serial.println(z);
    x++;
    y++;
    z=x+y;
    delay(wait);
    Serial.print("Nuestro contador es todo lento-->i = ");
    Serial.println(i);//Imprimir en el monitor serial
  //println es imp´rimir linea
    delay(wait);
   
  area = Pi * rad * rad;

  Serial.print(mensaje1);
  Serial.print(rad);
  Serial.print(mensaje2);
  Serial.println(area);
  delay(wait);
  //rad = rad + 1;
  rad++;
 
}
