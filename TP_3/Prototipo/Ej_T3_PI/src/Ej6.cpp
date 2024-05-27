#include <Arduino.h> 

const int ledPin1 = 18;
const int ledPin2 = 5;
const int btnPin1 = 34; 
const int btnPin2 = 35; 
bool ledState1 = false; 
bool ledState2 = false; 

void setup() {
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(btnPin1, INPUT_PULLUP); 
    pinMode(btnPin2, INPUT_PULLUP); 
}

void loop() {
    if (digitalRead(btnPin1) == LOW) { 
        ledState1 = !ledState1; 
        digitalWrite(ledPin1, ledState1); 
        delay(500); 
    }

    if (digitalRead(btnPin2) == LOW) { 
        ledState2 = !ledState2; 
        digitalWrite(ledPin2, ledState2); 
        delay(500); 
    }
}