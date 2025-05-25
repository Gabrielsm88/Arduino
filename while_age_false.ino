//
//

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  bool idade = false;
  
  while (idade == false)
  {
  Serial.println("Qual a idade do Neymar?");
    while(!Serial.available());
    int resposta = Serial.parseInt();
    if(resposta == 32)
    {
     Serial.println("\nParabens\n");        
     idade = true;
    }
  }
}