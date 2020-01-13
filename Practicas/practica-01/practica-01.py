from guizero import App, Text, PushButton, TextBox
import serial
port = serial.Serial("/dev/ttyS0", baudrate=9600, timeout=1)

def enciende_rojo():
    cmd = "R"
    port.write(cmd.encode())
    rcv=port.read(20)

def enciende_azul():
    cmd = "B"
    port.write(cmd.encode())
    rcv=port.read(20)

def enciende_verde():
    cmd = "G"
    port.write(cmd.encode())
    rcv=port.read(20)

app = App(title="Control de LEDs RGB")
message = Text(app, text="Control de LEDs RGB!")
rojo = PushButton(app, text="Rojo",command=enciende_rojo)
rojo.bg="red"
verde = PushButton(app, text="Verde",command=enciende_verde)
verde.bg="light green"
azul= PushButton(app, text="Azul",command=enciende_azul)
azul.bg="light blue"
app.display()
