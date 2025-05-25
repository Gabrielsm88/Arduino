int x, soma = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe um valor para x: ");
  while(!Serial.available());
  x = Serial.parseInt();
  
  while(x != 0)
  {
  soma = soma + x;
    //soma += x;
  Serial.println("Informe um novo valor para x");
    while(!Serial.available());
  x = Serial.parseInt();
  }
  
  Serial.println("\nSoma dos valores digitados: " + String(soma) + "\n");
  
}