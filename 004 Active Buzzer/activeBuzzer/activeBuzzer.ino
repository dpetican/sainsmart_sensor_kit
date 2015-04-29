//define output pin
const int Buzzer = 3;

void setup(){
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  int i;

  while(1)
  {
    for(i = 0; i < 80; i++)
    {
      digitalWrite(Buzzer, HIGH);
      delay(1);
      digitalWrite(Buzzer, LOW);
      delay(1);
    }
    
    for(i = 0; i < 500; i++)
    {
      digitalWrite(Buzzer, HIGH);
      delay(2);
      digitalWrite(Buzzer, LOW);
      delay(2);
    }
  }
} 




