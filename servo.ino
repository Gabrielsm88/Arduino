#include <Servo.h> //bliblioteca para o servo motor
Servo servo1; //criando um objeto chamado servo1
  
void setup()
{
  Serial.begin(9600);
  servo1.attach(2,500,2500); //conectando o objeto servo1 ao pino digital 2, (500 e 2500) especificam os limites de pulso...
  servo1.write(0); //ao ligar mantem o servo parado em 0 graus
  delay(15); //aguarda o servo processar o sinal enviado
}

void loop()
{
  Serial.println("informe um valor entre 0 ate 180");
  while(!Serial.available());
  int grau = Serial.parseInt();
  Serial.println("Valor em graus " + String(grau));
  servo1.write(grau);
  delay(15);
}