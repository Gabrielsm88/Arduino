int desliz = 2;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(desliz, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(desliz) == LOW)
   {
    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
   }
  else
   {
    digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
   }
}