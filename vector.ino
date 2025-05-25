void setup()
  
{
  
  Serial.begin(9600);
  Serial.println("Informe a quantidade de numeros: ");
  while(!Serial.available());
  int n = Serial.parseInt();
  float valores[n]; //array de valores flutuantes
  // for para leitura de dados
  for (int i=0; i < n ; i++)
  {
  Serial.println("Informe o " + String(i+1) + " valor");
    while(!Serial.available());
    valores[i]=Serial.parseFloat();
  }
  Serial.println(" ");
  // for para mostrar o conteudo do vetor
  for(int i = 0;i < n;i++){
  Serial.println(valores[i],2);
  
  } 
  
}

void loop(){}