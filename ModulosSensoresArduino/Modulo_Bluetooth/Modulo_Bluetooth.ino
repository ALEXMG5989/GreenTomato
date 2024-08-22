#include <SoftwareSerial.h>  // Incluimos la librería SoftwareSerial
SoftwareSerial BT(10, 11);   // Definimos los pines RX y TX del Arduino conectados al Bluetooth
int state = 0;

void setup() {
  BT.begin(9600);      // Inicializamos el puerto serie BT que hemos creado
  Serial.begin(9600);  // Inicializamos el puerto serie
}

void loop() {
  if (BT.available()) {     // Si llega un dato por el puerto BT se procesa
    char dato = BT.read();  // Lee el dato del Bluetooth

    Serial.write(dato);  // Muestra el dato en el monitor serie
  }

  if (Serial.available()) {  // Si llega un dato por el monitor serial se envía al puerto BT
    BT.write(Serial.read());
  }
}
