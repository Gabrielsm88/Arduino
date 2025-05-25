// 02/05
void setup ()
{
  Serial.begin(9600);
  
  //int x = 25;
  
  
  // (condição)? verdadeira : falsa;
  
  //(x <= 10)? Serial.println("true") : Serial.print("false");
  
  //x == 10 //false
  //x != 10 //true
  //x > 10//true
  //x >= 10 //true
  //x < 10 //falso	
  //x <= 10 //falso
}

void loop()
{
    int x = 25;
  ((x<10)&&(x>0))? Serial.println("true") : Serial println("false");
  delay(1000);
    
    ((x<10)||(x>0))? Serial.println("true") : Serial println("false");
  
  (!(x<10)||(x>0))? Serial.println("true") : Serial println("false");
  //int valor = 2+6/3;
  //int valor = 3+2*4;
  //int valor = (3+2)*4;
  //int valor = 60/(3+2)*4;
  //int valor = 60/((3+2)*4);
  //int valor = 14%3;
  //int valor = 19%4;
  //int valor = 31415%2;

  //******************************************************
  /*
  int soma = 25+22;
  int subtracao = 25-22;
  int multiplicacao = 25*22;
  int divisao = 22/5;
  float dive = 22.0/5;
  
  Serial.print("soma = ");
  Serial.println(soma);
  Serial.print("subtracao = ");
  Serial.println(subtracao);
  Serial.print("multiplicacao = ");
  Serial.println(multiplicacao);
  Serial.print("divisao = ");
  Serial.println(divisao);
  Serial.print("dive = ");
  Serial.println(dive);
  */
  
  //int x = 7;
  //x = x + 3;
  //x+= 3;
  //x = x-1;
  //x = x-=1;
  //x = x * 12;
  //x = x*=12;
  //x = x / 15;
  //x = x/= 15;
  
  //int valor = 0;
  //while(valor <=10)
  //{
  //Serial.println(valor); //imprime o valor atual
  // valor ++;
  // delay(1000);
    
  //  int valor = 10;
 // while(valor > 10)
// {
 // Serial.println(valor); //imprime o valor atual
 //   valor --;
//   delay(1000);
 // }  
 
  //Serial.println(x);
  
  delay(10000);

}