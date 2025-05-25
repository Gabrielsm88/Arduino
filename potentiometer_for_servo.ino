#include<Servo.h>
Servo servo1;
int potenciometro = A0; // Conecta potenciometro na porta analogica A0
int valorDoPotenciometro = 0; //
  
void setup()
{
servo1.attach(3); //conecta o objeto servo1 ao pino digital 3
}

void loop()
{
 valorDoPotenciometro = analogRead(potenciometro);
 valorDoPotenciometro = map(potenciometro,0,1023,0,179);
  servo1.write(valorDoPotenciometro);
  delay(15);

}