
void setup() {
 
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);    
  digitalWrite(8, HIGH);   
  delay(1000);
  digitalWrite(7, HIGH);  
  delay(1000);                     
  digitalWrite(7, LOW);  
  digitalWrite(8, LOW);    
  delay(1000);                     
}

