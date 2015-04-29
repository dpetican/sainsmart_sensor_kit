//define input and output pins
const int Pot = A0;
const int Led = 13;

void setup() {
  pinMode(Led, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  int val;
  
  val = analogRead(Pot);    
  
  digitalWrite(Led, HIGH);  
  delay(val);          
  digitalWrite(Led, LOW);   
  delay(val);
  Serial.println(val, DEC);  
}



