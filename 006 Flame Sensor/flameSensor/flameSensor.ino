//define input and output pins
const int Flame = A0;
const int Led = 13;

void setup() {
  
  Serial.begin(9600);
}

//digital pin on this module does not seem to work?
//analog output is somewhat proportional to flame intensity
//range =~500 -> 20

void loop() {
  int val;

  val = analogRead(Flame);
  
  Serial.println(val, DEC);
  if(val < 500) {
    digitalWrite(Led, HIGH);
    Serial.println("There is a fire.  Run!!!!!");
  }
  else {
    digitalWrite(Led, LOW);
    Serial.println("Good thing there is no fire");
  }

}
