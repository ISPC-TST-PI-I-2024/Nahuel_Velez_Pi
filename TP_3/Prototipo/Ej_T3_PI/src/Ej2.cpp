#include <Arduino.h> 

const int ledPin1 = 18;
const int ledPin2 = 5;
const int ledPin3 = 17;


void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH); 
  delay(500); 
  digitalWrite(ledPin1, LOW); 

  digitalWrite(ledPin2, HIGH); 
  delay(500); 
  digitalWrite(ledPin2, LOW); 

  digitalWrite(ledPin3, HIGH); 
  delay(500); 
  digitalWrite(ledPin3, LOW); 
 
  
}
