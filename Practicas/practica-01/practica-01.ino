#define RGB_GREEN 3
#define RGB_BLUE 5
#define RGB_RED 6
#define espera 300
char c;
val1 = 0;
val2 = 0;
void setup() {
  Serial.begin(9600);
  pinMode (RGB_RED, OUTPUT);
  pinMode (RGB_GREEN, OUTPUT);
  pinMode (RGB_BLUE, OUTPUT);

}

void loop() {
  if(Serial.available()> 0)
  {
    c=Serial.read();
    if (c == 'R'){
      digitalWrite(RGB_GREEN, LOW); 
      digitalWrite(RGB_BLUE, LOW); 
      digitalWrite(RGB_RED, HIGH); 
    }
    if (c == 'G'){
      digitalWrite(RGB_GREEN, HIGH); 
      digitalWrite(RGB_BLUE, LOW); 
      digitalWrite(RGB_RED, LOW); 
    }
    if (c == 'B'){
    digitalWrite(RGB_GREEN, LOW); 
    digitalWrite(RGB_BLUE, HIGH); 
    digitalWrite(RGB_RED, LOW); 
    }
  }
}
