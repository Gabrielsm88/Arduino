void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe qual dia da semana: \n1 - Domingo \n2 - Segunda \n3 - Terca \n4 - Quarta \n5 - Quinta \n6 - Sexta \n7 - Sabado");
	while(!Serial.available());
  int dia = Serial.parseInt();
  /*
  if(dia == 1)
  {
  Serial.println("\nHoje e Domingo\n");
  }
  else if(dia == 2)
  {
  Serial.println("\nHoje e Segunda\n");
  }
  else if(dia == 3)
  {
  Serial.println("\nHoje e Terca\n");
  }
  else if(dia == 4)
  {
   Serial.println("\nHoje e Quarta\n");
  }
  else if(dia == 5)
  {
   Serial.println("\nHoje e Quinta\n");
  }
  else if(dia == 6)
  {
   Serial.println("\nHoje e Sexta\n");
  }
  else if(dia == 7)
  {
   Serial.println("\nHoje e Sabado\n");
  }
  else 
  {
   Serial.println("\nDia da Semana invalido\n");
  }
  */
  
  switch(dia)
   { 
    case 1:  Serial.println("\nHoje e Domingo\n"); break;
    case 2:  Serial.println("\nHoje e Segunda\n"); break;
    case 3:  Serial.println("\nHoje e Terca\n");   break;
    case 4:  Serial.println("\nHoje e Quarta\n");  break;
    case 5:  Serial.println("\nHoje e Quinta\n");  break;
    case 6:  Serial.println("\nHoje e Sexta\n");   break;
    case 7:  Serial.println("\nHoje e Sabado\n");  break;
    default: Serial.println("\nDia da Semana invalido\n"); break;
  } 
  delay(10000);
}