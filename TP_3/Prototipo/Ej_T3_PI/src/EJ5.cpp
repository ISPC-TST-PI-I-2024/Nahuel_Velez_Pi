#include <Arduino.h> 

const int ledPin1 = 18;
const int btnPin1 = 34; 
int ledState1 = LOW;   
unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;   

void setup() {
    pinMode(ledPin1, OUTPUT);
    pinMode(btnPin1, INPUT_PULLUP); 
}

void loop() {
    int btnState1 = digitalRead(btnPin1); 

    if (btnState1 != ledState1) { 
        lastDebounceTime = millis(); 
    }

    if ((millis() - lastDebounceTime) > debounceDelay) { 
        if (btnState1 != ledState1) { 
            ledState1 = btnState1; 
            digitalWrite(ledPin1, ledState1); 
        }
    }
}