int x,y;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe o primeiro valor: ");
  while(!Serial.available());
  x = Serial.parseInt();
  
  Serial.println("Informe o segundo valor: ");
  while(!Serial.available());
  y = Serial.parseInt();
  
  while(x != y)
  {
   if (x < y)
   {
   Serial.println("Crescente");
   }
    else
    {
    Serial.println("Decrescente");
    }
    
  delay(2000);
    
    Serial.println("Informe o primeiro valor: ");
  while(!Serial.available());
  x = Serial.parseInt();
  
  Serial.println("Informe o segundo valor: ");
  while(!Serial.available());
  y = Serial.parseInt();
    
  }
  Serial.println("Fim");
}