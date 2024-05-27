#include <Arduino.h> 


const int ledPin1 = 18;
const int btnPin1 = 34; 

void setup() {
    pinMode(ledPin1, OUTPUT);
    pinMode(btnPin1, INPUT_PULLUP); 
}

void loop() {
    if (digitalRead(btnPin1) == LOW) { 
        digitalWrite(ledPin1, HIGH); 
    } else {
        digitalWrite(ledPin1, LOW); 
    }
}
