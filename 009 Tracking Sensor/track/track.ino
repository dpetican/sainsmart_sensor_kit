//define input and output pins
const int Track = 3;
const int Led = 13;

void setup() {
  pinMode(Track, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  int val;

  val = digitalRead(Track);
  
  if(val == HIGH) {
    digitalWrite(Led, HIGH);
  }
  else {
    digitalWrite(Led, LOW);
  }
}

