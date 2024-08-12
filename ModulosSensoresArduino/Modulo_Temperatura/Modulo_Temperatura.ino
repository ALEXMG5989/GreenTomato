#include <DHT11.h>  //para poder usar el sensor de temperatura
DHT11 dht11(3);     //asignar el sensor de temperatura al pin 3
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //iniciar el serial a 9600 baudios
}

void loop() {
  // put your main code here, to run repeatedly:
  int temperature = dht11.readTemperature();  //Intenta leer la temperatura del sensor DHT11 y almacena el valor en la variable temperature.
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(500);
}
