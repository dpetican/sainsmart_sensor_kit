//define input and output pins
const int Touch = 3;
const int Led = 13;

void setup() {
  pinMode(Touch, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  int val;

  val = digitalRead(Touch);
  
  if(val == HIGH) {
    digitalWrite(Led, HIGH);
  }
  else {
    digitalWrite(Led, LOW);
  }
}



