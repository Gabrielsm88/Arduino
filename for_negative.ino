void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("informe a quantidade de numeros: ");
  while(!Serial.available());
  int n = Serial.parseInt();
  
  int negativo[n];
  
  //for para leitura de dados
  
   for(int i = 0; i<n; i++){
  
    Serial.println("informe o " + String(i+1) + " valor");
    while(!Serial.available());
     negativo[i] = Serial.parseInt();
   }  
    //for para mostrar os valores negativos
          
    for(int i = 0; i<n; i++){
      if(negativo[i] < 0){
      Serial.println(negativo[i]);
      }
   }
}
  
  
            