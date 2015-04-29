//define input and output pins
//could also use anlaog pin on this module if desired
const int Hall = 3;
const int Led = 13;

void setup() {
  pinMode(Hall, INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;

  val = digitalRead(Hall);

  if(val == LOW) {
    digitalWrite(Led, HIGH);
    Serial.println("Magnetic fields sensed");
  }
  else {
    digitalWrite(Led, LOW);
    Serial.println("Magnetic field NOT present");
  }
}



