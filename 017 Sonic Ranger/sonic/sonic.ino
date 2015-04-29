//define input and outputs
const int Trig = 3;
const int Echo = 2;

void setup() {
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long pulse;
  float distance;

  //10us high pulse triggers sonic ranging
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  
  pulse = pulseIn(Echo, HIGH);  //echo returns pulse width which is time to target
  distance = pulse / 58.0; //convert to cm or use 148 for inches
  Serial.println(distance, 2);
  delay(1); //need to wait at least 10us between requests
} 


