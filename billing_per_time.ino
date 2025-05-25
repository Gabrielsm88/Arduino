int minutos;
float conta;


void setup()
{
Serial.begin(9600);
}


void loop()
{
  if(Serial.available()>0)  //Verifica se aha dados disponiveis na porta serial
  {
  minutos = Serial.parseInt(); //Le o valor na serial e converter para o inteiro
  conta = 50.0;
    if(minutos > 100)
    {
    conta = conta + (minutos - 100) * 2.0;
      //conta +=(minutos - 100) * 2.0;
    }
  Serial.print("Valor a pagar: ");
    Serial.println(conta,2);
  }

}