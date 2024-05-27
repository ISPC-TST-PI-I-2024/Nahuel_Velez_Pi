#include <Arduino.h>

const int ledPin = 18;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // ENCIENDE EL LED
  delay(1000); //ESPERAR UN SEGUNDO
  digitalWrite(ledPin, LOW); //APAGAR LED
  delay(1000); // ESPERAR UN SEGUNDO
  
}