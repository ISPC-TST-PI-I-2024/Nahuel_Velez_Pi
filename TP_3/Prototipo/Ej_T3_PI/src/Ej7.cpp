#include <Arduino.h> 

const int swPin1 = 13;  
const int swPin2 = 12;  
const int swPin3 = 14;  
const int swPin4 = 27;  
const int swPin5 = 26;  
const int swPin6 = 25;  
const int swPin7 = 33;  
const int swPin8 = 32;  

const int ledPin1 = 18; 
const int ledPin2 = 5; 
const int ledPin3 = 17; 
const int ledPin4 = 16; 
const int ledPin5 = 4; 
const int ledPin6 = 0; 
const int ledPin7 = 2; 
const int ledPin8 = 15; 

void setup() {
    pinMode(swPin1, INPUT_PULLUP); 
    pinMode(swPin2, INPUT_PULLUP); 
    pinMode(swPin3, INPUT_PULLUP); 
    pinMode(swPin4, INPUT_PULLUP); 
    pinMode(swPin5, INPUT_PULLUP); 
    pinMode(swPin6, INPUT_PULLUP); 
    pinMode(swPin7, INPUT_PULLUP); 
    pinMode(swPin8, INPUT_PULLUP);

    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin7, OUTPUT);
    pinMode(ledPin8, OUTPUT);
}

void loop() {
    int swState1 = digitalRead(swPin1);
    int swState2 = digitalRead(swPin2);
    int swState3 = digitalRead(swPin3);
    int swState4 = digitalRead(swPin4);
    int swState5 = digitalRead(swPin5);
    int swState6 = digitalRead(swPin6);
    int swState7 = digitalRead(swPin7);
    int swState8 = digitalRead(swPin8);

    digitalWrite(ledPin1, swState1);
    digitalWrite(ledPin2, swState2);
    digitalWrite(ledPin3, swState3);
    digitalWrite(ledPin4, swState4);
    digitalWrite(ledPin5, swState5);
    digitalWrite(ledPin6, swState6);
    digitalWrite(ledPin7, swState7);
    digitalWrite(ledPin8, swState8);
}