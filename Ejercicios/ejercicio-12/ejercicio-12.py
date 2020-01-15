from gpiozero import Motor
from time import sleep

motor = Motor(forward=20, backward=21, enable=16, pwm=True)

while True:
    speed = 0.5
    motor.forward(speed)
    sleep(5)
    motor.backward(speed)
    sleep(5)
