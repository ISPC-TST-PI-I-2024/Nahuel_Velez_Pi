// Definición de pines
const int buttonPin = 2; // Pin donde está conectado el botón
const int ledPin = 13;   // Pin donde está conectado el LED

// Variable para almacenar el estado del botón
int buttonState = 0;

void setup() {
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Configurar el pin del botón como entrada
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Leer el estado del botón
  buttonState = digitalRead(buttonPin);

  // Comprobar si el botón está presionado
  if (buttonState == HIGH) {
    // Si el botón está presionado, encender el LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Si el botón no está presionado, apagar el LED
    digitalWrite(ledPin, LOW);
  }
}
