void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe a quantidade de cadastro: ");
  while(!Serial.available());
  int n = Serial.parseInt();
  
  String nomes[5];
  int idades[5];
  float alturas[5];
  
  for(int i=0; i<n ; i++){
  Serial.println("Informe o nome da " + String(i+1) + " pessoa");
  while(!Serial.available());
  nomes[i] = Serial.readString();
  
  Serial.println("Informe a idade da " + String(nomes[i]));
  while(!Serial.available());
  idades[i] = Serial.parseInt();
    
  Serial.println("Informe a altura da " + String(nomes[i]));
  while(!Serial.available());
  alturas[1] = Serial.parseFloat();
  }
    
  float soma = 0.0;
  for (int i=0; i<n ; i++){
  soma += alturas[i];
  }
  float media = soma/n;
  
  
  Serial.println("A media das alturas" + String(media,2));
  int somaIdade = 0;
  for (int i=0; i<n; i++){
    if(idades[i] < 16){
    somaIdade++;  
    }          
   }
  
  float porcentagem =(float)somaIdade/n*100;
  Serial.println("Pessoas com menos de 16 anos: " + String(porcentagem) + "%");
}