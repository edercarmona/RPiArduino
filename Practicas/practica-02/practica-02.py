import serial
import time
port = serial.Serial("/dev/ttyS0", baudrate=9600, timeout=1)

while(1):
    port.write("hola".encode())
    rcv=port.readline()
    print(rcv.decode(encoding='UTF-8',errors='strict'))
