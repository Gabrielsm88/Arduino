void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
}


void loop()
{
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}