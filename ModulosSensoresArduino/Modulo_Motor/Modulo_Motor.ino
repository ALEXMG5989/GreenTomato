// Definir los pines para el motor.
int motorPin1 = 11;
int motorPin2 = 12;


void setup() {
  // put your setup code here, to run once:

  // Configurar los pines del motor como salidas.
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}



void on() {
  // Encender el motor.
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
}

void off() {
  // Apagar el motor.
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
}