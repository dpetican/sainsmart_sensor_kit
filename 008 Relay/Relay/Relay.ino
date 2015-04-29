//define output pin
const int Relay = 3;

void setup() {
  pinMode(Relay, OUTPUT);
}

void loop() {
  digitalWrite(Relay, HIGH);
  delay(2000);
  digitalWrite(Relay, LOW);
  delay(2000);
}



