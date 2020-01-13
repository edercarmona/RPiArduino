#include "LedControlMS.h"

#define NumeroMatrices 1

LedControl lc=LedControl(12,11,10, NumeroMatrices);

void setup(){
  Serial.begin(9600);
  for (int i=0; i< NumeroMatrices ; i++){
    lc.shutdown(i,false);    // Despertar a la matriz
    lc.setIntensity(i,8);    // Intensidad a 8
    lc.clearDisplay(i);      // Borrar la matriz
  }
}
void loop(){
  if (Serial.available() > 0) {
    char data[20];
    size_t count = Serial.readBytesUntil('\n', data, 20);
    lc.writeString(0,data);
    delay(1000);
  }
    
}
