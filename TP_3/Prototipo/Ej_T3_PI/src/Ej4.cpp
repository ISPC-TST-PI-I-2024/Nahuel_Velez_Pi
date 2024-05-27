#include <Arduino.h> 


const int ledPin1 = 18;
const int btnPin1 = 34; 
int ledState1 = LOW;   

void setup() {
    pinMode(ledPin1, OUTPUT);
    pinMode(btnPin1, INPUT_PULLUP); 
}

void loop() {
    int btnState1 = digitalRead(btnPin1); 

    if (btnState1 == LOW) { 
        ledState1 = !ledState1; 
        digitalWrite(ledPin1, ledState1); 
        delay(100); 
    }
}

