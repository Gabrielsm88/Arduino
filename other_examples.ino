
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  /*
  Serial.println("Ola que horas sao: ");
  while (!Serial.available());
  int horas = Serial.parseInt();
  
  (horas <= 12)? Serial.println("bom dia!!!") : Serial.println("Boa tarde!!!");
  
  *******************************************************************
  
  if(horas <= 12)
  {
    Serial.println("bom dia!!!\n");
  }
  else
  {
  Serial.println("Boa tarde!!!\n");
  }
}


  if(horas <= 12)
  {
  Serial.println("Bom dia");
  }
  else if(horas < 18)
  {
    Serial.println("Boa tarde");
  }
  else
  {
  Serial.println("Boa noite");
  }
  */
  Serial.println("Informe sua idade para entrar na festa");
  while(!Serial.available());
  int idade = Serial.parseInt();
  
  if(idade >= 18)
  {
  Serial.println("\npode entrar na festa\n");
  }
  else if(idade < 18 && idade >= 16)
  {
  Serial.println("\npode entrar na festa com a presenca de um responsavel\n");
  }
  else
  {
  Serial.println("\nnao tem permissao para entrar na festa\n");
  }
  
  
}