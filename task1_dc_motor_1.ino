int Button1 = 0;

int Button2 = 0;

void setup()
{
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Button1 = digitalRead(3);
  Button2 = digitalRead(2);
  if (Button1 == HIGH) {
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }
  if (Button2 == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}