int ENA = 9;
int IN1 = 10;
int IN2 = 11;
char c;

int vel = 150;

void setup()
{
 Serial.begin(9600) ;
 pinMode (ENA, OUTPUT);
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
}

void loop(){
 if (Serial.available()){
  c = Serial.read();
  switch (c){
    case 'F':
      digitalWrite(IN2,LOW);
      digitalWrite(IN1,HIGH);
      analogWrite (ENA, 255);
      break;
    case 'B':
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      analogWrite (ENA, 255);
      break;
    case 'S':
    digitalWrite(IN2,LOW);
    digitalWrite(IN1,LOW);
    break;
  }
  }
}
