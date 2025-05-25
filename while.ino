void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int x = 1;
  Serial.println("inicio");
  while(x <= 10)
  {
  Serial.println(x);
  x++;
  delay(1000);
  }
  Serial.println("Fim");
  delay(1000);
}