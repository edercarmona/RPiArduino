import Adafruit_DHT
sensor = Adafruit_DHT.DHT11

pin = 21
while(1):
    humidity, temperature = Adafruit_DHT.read_retry(sensor, pin)
    if humidity is not None and temperature is not None:
        print('Temp={0:0.1f}*C  Humedad={1:0.1f}%'.format(temperature, humidity))
    else:
        print('Error al leer datos!!!')
