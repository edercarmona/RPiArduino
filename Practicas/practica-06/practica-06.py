from guizero import App, Text, PushButton, TextBox
import serial
port = serial.Serial("/dev/ttyS0", baudrate=9600, timeout=1)

def motor_avanza():
    cmd = "F"
    port.write(cmd.encode())
    rcv=port.read(20)

def motor_reversa():
    cmd = "B"
    port.write(cmd.encode())
    rcv=port.read(20)

def motor_stop():
    cmd = "S"
    port.write(cmd.encode())
    rcv=port.read(20)

app = App(title="Control de Motor DC")
message = Text(app, text="Control de Motor DC")
avanza = PushButton(app, text="Avanza",command=motor_avanza)
reversa = PushButton(app, text="Reversa",command=motor_reversa)
alto= PushButton(app, text="Alto",command=motor_stop)
app.display()
