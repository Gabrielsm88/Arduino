int bot1 = 13;
int bot2 = 12;

void setup()
{
  pinMode(bot1, INPUT_PULLUP);
  pinMode(bot2, INPUT_PULLUP);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if (digitalRead(bot1) == HIGH){
     digitalWrite(5, HIGH);
  }
  else{
  	 digitalWrite(5, LOW);
  }
  if (digitalRead(bot2) == HIGH){
      digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, LOW);
  }
}