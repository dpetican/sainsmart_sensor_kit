//define input pin
const int Water = A0;

void setup() {
  Serial.begin(9600); 
}

//max value ~= 680 however even a very low level produces an output
//of ~500 so the working physical range is less than 1cm

void loop() {
  int val;
  
  val = analogRead(Water);    
  
  Serial.println(val, DEC);  
}


