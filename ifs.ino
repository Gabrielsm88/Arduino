
bool sol = true;

void setup() 
{  
  Serial.begin(9600);
}  

void loop() 
{ 
  /*
  if (sol); 
  {
    Serial.println("Vamos para a praia\n");
    delay(1000);
  }
  else
  {
    Serial.println("Vamos dormir.. zzzzzzzzzzzz\n");
    delay(1000);
  }
  */

  int x = 2;
  int y = 3;
  
  //String igual =  (x == y)? "numeros igual" : "sao diferentes";
  //Serial.println(igual);
  // delay(1000);

if(x == y)
{
Serial.println("numeros iguais");
}
else
{
Serial.println("numeros sao diferentes");
}

} 
