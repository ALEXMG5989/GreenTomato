#include <DHT11.h>
DHT11 dht11(3);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int humedad = dht11.readHumidity();
Serial.print("HUMEDAD: ");
    Serial.print(humedad);
    Serial.println(" %");
    delay(500);
}
