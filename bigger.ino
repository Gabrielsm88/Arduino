void setup(){Serial.begin(115200);}
  
void loop()
{
  Serial.println("Digite o primeiro valor: ");
  while(!Serial.available());
  int n1 = Serial.parseInt();
  
  Serial.println("Digite o segundo valor: ");
  while(!Serial.available());
  int n2 = Serial.parseInt();
  
  Serial.println("Digite o terceiro valor: ");
  while(!Serial.available());
  int n3 = Serial.parseInt();
/* 
  if(n1>n2 && n1>n3){
  
  Serial.println("Maior = " + String(n1));
  
  }else if(n2 > n3){
  
  Serial.println("Maior = " + String(n2));

  }else{
  
  Serial.println("Maior = " + String(n3));

  }
  */
  int resultado = Maior(n1,n2,n3);
  Serial.println("Maior = " + String(resultado));
  delay(3000);
}



int Maior(int a, int b, int c){

int m;
  
  if(a>b && a>c){
  
  m = a;
  }
  else if(b>c){
  
  m = b;
  }
  else{
  
  m = c;
  }
  
  return m;
}