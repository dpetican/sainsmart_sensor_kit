//define input and output pins
const int Button = 3;
const int Led = 13;

void setup() {
  pinMode(Button, INPUT);
  pinMode(Led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;

  val = digitalRead(Button);

  if(val == HIGH) {
    digitalWrite(Led, HIGH);
    Serial.println("Button pressed");
  }
  else {
    digitalWrite(Led, LOW);
    Serial.println("Button NOT pressed");
  }
}



