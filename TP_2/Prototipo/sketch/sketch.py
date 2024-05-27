from machine import Pin
import time

# Definir pines
button_pin = Pin(5, Pin.IN, Pin.PULL_DOWN)  # D1 (GPIO 5) para el botón
led_pin = Pin(4, Pin.OUT)                   # D2 (GPIO 4) para el LED

while True:
    # Leer el estado del botón
    button_state = button_pin.value()
    
    # Comprobar si el botón está presionado
    if button_state == 1:
       
        led_pin.on()
    else:
       
        led_pin.off()
    
    # Pequeño retraso para evitar lecturas inestables
    time.sleep(0.01)
