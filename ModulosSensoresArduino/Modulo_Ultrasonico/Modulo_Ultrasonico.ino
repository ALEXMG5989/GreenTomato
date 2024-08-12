
#include <NewPing.h>//SENSOR ULTRA SONICO
const int trigPin = 2;  // Pin de salida del ultrasonido (TRIGGER)
const int echoPin = 3;  // Pin de entrada del ultrasonido (ECHO)
long duration;          // Variable para almacenar la duración del pulso
int distanceCm;         // Variable para almacenar la distancia calculada

void setup() {
  
  // Configuración de los pines del sensor ultrasónico
  pinMode(trigPin, OUTPUT);//BOCA
  pinMode(echoPin, INPUT);//OREJAS
}

void loop() {
  // Generar un pulso ultrasónico de 10 microsegundos
  digitalWrite(trigPin, LOW);// SE APAGA PARA QUE NO REALICE NADA 
  delayMicroseconds(2);// RETARDO DE 2 MICRO SEG
  digitalWrite(trigPin, HIGH);//LANZA ONDA
  delayMicroseconds(10);//TARDA 10 MICRO SEG
  digitalWrite(trigPin, LOW);//YA NO LANZA SONIDO

// Medir la duración del pulso ultrasónico recibido
  duration = pulseIn(echoPin, HIGH);  //DURATION ES EL RESULTADO DEL PULSO IN QUE ES EL ECHO CUANDO LE LLEGA UN PRENDIDO

  //DISTANCIA SE CALCULA EN CM  
  distanceCm = duration * 0.034 / 2;
}