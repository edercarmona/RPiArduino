from gpiozero import Button
from signal import pause

def decir_hola():
    print("Hello!")

def decir_adios():
    print("Goodbye!")

button = Button(21)

button.when_pressed = decir_hola
button.when_released = decir_adios

pause()
