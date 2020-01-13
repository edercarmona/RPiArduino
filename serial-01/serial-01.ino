char c;

void setup() {
  Serial.begin(9600);
  Serial.println("Hola desde Arudino");
}

void loop() {
  if(Serial.available()> 0)
  {
    c=Serial.read();
    if (c == 'R'){
      Serial.println("Recibi una R"); 
    }
    if (c == 'G'){
      Serial.println("Recibi una G"); 
    }
    if (c == 'B'){
      Serial.println("Recibi una B"); 
    }
  }
}
