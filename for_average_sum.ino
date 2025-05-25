// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop(){
  
  Serial.println("informe a quantidade de numeros: ");
  while(!Serial.available());
  int n = Serial.parseInt();

  float nota[n];
 
  for(int i = 0; i < n; i++){
  
    Serial.println("informe o " + String(i+1) + " valor");
    while(!Serial.available());
     nota[i] = Serial.parseFloat();
   }  
  //for para calcular a soma das notas
  float soma = 0.0;
  for(int i = 0; i < n; i++){
  soma += nota[i];
 }

  float media = soma/n;
  
  //for para mostrar os valores contidos no vetor
    for(int i = 0; i < n; i++){
    Serial.print(String(nota[i],2)+ " ");
    }
  Serial.print("\n" + String(soma,2));
    Serial.print("\n" + String(media,2) + "\n");

}