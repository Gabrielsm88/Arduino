int x,y,z;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe o primeiro valor");
  while(!Serial.available());
  x = Serial.parseInt();
  
  Serial.println("Informe o segundo valor");
  while(!Serial.available());
  y = Serial.parseInt();
  
  Serial.println("Informe o terceiro valor");
  while(!Serial.available());
  z = Serial.parseInt();
  
  if(x<y && x<z)
  {
    Serial.println("\nMENOR " + String(x));
  }
  else if(y<z)
  {
    Serial.println("\nMENOR " + String(y));
  }
  else
  {
    Serial.println("\nMENOR " + String(z));
  }
  delay(100000);
}