int L,C;

void setup(){Serial.begin(9600);}

void loop(){

Serial.println("Informe quantas linhas possui sua matriz");
while(!Serial.available());
 L = Serial.parseInt();
  
Serial.println("Informe quantas colunas possui sua matriz");
while(!Serial.available());
 C = Serial.parseInt();
  
  Serial.println("\nMatriz " + String(L) + " X " + String(C));
  int A [L][C];
  
  for(int i=0;i<L;i++){   //for pai percorre linhas
    for(int j=0;j<C;j++){    //for filho percorre colunas
     Serial.println("Informe o valor da matriz na posicao" + String(i) + " x " + String(j));
     while(!Serial.available());
      A[i][j] = Serial.parseInt();
    }  
  }
  
  for(int i=0;i<L;i++){
    for(int j=0;j<C;j++){
    
    Serial.print(String( A[i][j]) + " ");
       
    } // fim for filho
  Serial.println(" ");
  } //fim for pai
  delay(1000);
}