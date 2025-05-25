int x,n,soma;


void setup()
{
  Serial.begin(9600);
}

void loop(){
  
  Serial.println("Informe o valor de n: \n");
  while(!Serial.available());
  n = Serial.parseInt();
  
  soma = 0;
  
  for(int i = 1; i < n; i++){
  Serial.println("Informe o " + String(i) + " valor:" );
  while(!Serial.available());
    x = Serial.parseInt();
    soma += x;
  }
  Serial.println("\nA soma dos valores: " + String(soma) + "\n");
}