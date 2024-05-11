# Define los pines del botón y el LED
button_pin = machine.Pin(13, machine.Pin.IN)  # Botón en pin 13 (entrada)
led_pin = machine.Pin(14, machine.Pin.OUT)  # LED en pin 14 (salida)

while True:
    # Lee el estado del botón
    button_state = button_pin.value()

    # Si el botón está presionado (estado bajo), enciende el LED
    if button_state == 0:
        led_pin.on()
        print("¡Botón presionado! LED encendido")

    # Si el botón no está presionado (estado alto), apaga el LED
    else:
        led_pin.off()
        print("Botón no presionado. LED apagado")

    # Espera un segundo antes de verificar el estado del botón nuevamente
    time.sleep(1)