//define inputs and outputs
const int X = A0;
const int Y = A1;
const int Button = 3;

void setup()
{
  //button doesn't seem to work without pull-up; resistor might be missing from module
  pinMode(Button, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop()
{
  int joyX, joyY, joyButton;

  joyX = analogRead(X);
  joyY = analogRead(Y);
  joyButton = digitalRead(Button);

  Serial.print(joyX ,DEC);
  Serial.print(",");
  Serial.print(joyY ,DEC);
  Serial.print(",");
  Serial.println(joyButton ,DEC);
  delay(100);
}

