
int button1 = 7; 
int button2 = 8;  
int val1 = 0;
int val2 = 0;

void setup() { 
  Serial.begin(9600);
  pinMode(button1, INPUT);   
  pinMode(button2, INPUT);   
}

void loop(){
   if(Serial.available()> 0){
    val1 = digitalRead(button1);
    val2 = digitalRead(button2);
    if (val1 == HIGH) {        
       Serial.println("Boton 1");
    } else if (val2 == HIGH){
       Serial.println("Boton 2");
    }else{
       Serial.println("Nada");
    }
   }
}
