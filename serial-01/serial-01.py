import serial  
port = serial.Serial("/dev/ttyS0", baudrate=9600, timeout=1)
#port = serial.Serial("/dev/ttyUSB0", baudrate=9600, timeout=1)
cmd = "B"
port.write(cmd.encode())
rcv=port.read(20)
print(rcv.decode())
cmd = "R"
port.write(cmd.encode())
rcv=port.read(20)
print(rcv.decode())
cmd = "G"
port.write(cmd.encode())
rcv=port.read(20)
print(rcv.decode())