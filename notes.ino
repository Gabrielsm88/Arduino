void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe a sua nota do primeiro semestre: ");
  while(!Serial.available());
  float nota1 = Serial.parseFloat();
  
  Serial.println("Informe a sua nota do segundo semestre: ");
  while(!Serial.available());
  float nota2 = Serial.parseFloat();
  
  float soma = nota1 + nota2;
  
  Serial.println("NOTA FINAL " + String(soma,2));
  
  if(soma < 60)
  {
  Serial.println("REPROVADO");
  }
}