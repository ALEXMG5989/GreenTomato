#include <LiquidCrystal.h>//LCD

LiquidCrystal lcd(4, 6, 10, 11, 12, 13);


void setup() {
  // Inicialización del LCD
  lcd.begin(16, 2);
  
}

void loop() {

  // Limpiar la primera línea del LCD
  lcd.setCursor(0, 0);
  lcd.print("  HOLA       "); // DECIMOS HOLA
  lcd.setCursor(0, 0);
}

