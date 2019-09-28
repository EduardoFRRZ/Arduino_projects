int pinoLed = 12; 
int pinoSensorLuz = A0;               
int valorLuz = 0;                      
 
void setup() {
     pinMode(pinoLed,OUTPUT);
     Serial.begin(9600);        
}
 
void loop() {
  valorLuz = analogRead(pinoSensorLuz);
  Serial.println(valorLuz);        
  if(valorLuz<750)
  {                
    digitalWrite(pinoLed,HIGH);
  }
  else
  {                    
    digitalWrite(pinoLed,LOW);
  }
  delay(10);                   
}
