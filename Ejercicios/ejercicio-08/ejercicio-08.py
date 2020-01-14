
from gpiozero import DistanceSensor
from time import sleep

sensor = DistanceSensor(21, 20, max_distance = 2)

while True:
    print("hola")
    print('Distance to nearest object is', sensor.distance, 'm')
    sleep(1)
