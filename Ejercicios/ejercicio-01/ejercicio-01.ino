#define RGB_GREEN 3
#define RGB_BLUE 5
#define RGB_RED 6
#define espera 300

void setup() {
  pinMode (RGB_RED, OUTPUT);
  pinMode (RGB_GREEN, OUTPUT);
  pinMode (RGB_BLUE, OUTPUT);
}

void loop() {
digitalWrite(RGB_GREEN, HIGH); 
digitalWrite(RGB_BLUE, LOW); 
digitalWrite(RGB_RED, LOW); 
delay (espera); 
digitalWrite(RGB_GREEN, LOW); 
digitalWrite(RGB_BLUE, HIGH); 
digitalWrite(RGB_RED, LOW); 
delay (espera); 
digitalWrite(RGB_GREEN, LOW); 
digitalWrite(RGB_BLUE, LOW); 
digitalWrite(RGB_RED, HIGH); 
delay(espera); 
}
