//define input and output pins
const int shock = 3;
const int led = 13;

int val;

void setup() {
  pinMode(shock, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(shock);

  if(val == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Very shocking!!!");
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("Not shocking at all.");
  }
}


