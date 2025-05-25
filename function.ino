float n1 = 4.5;
float n2 = 8.9;


void setup(){Serial.begin(115200);}

void loop(){
/*
//MeuMetodo("funcao");
//  delay(3000);
}


void MeuMetodo(String parametro){

Serial.println(parametro);
}
----------------------------------------------------------
String RetornaNome(String nome, String sobrenome){
  
  return nome + " - " + sobrenome;
----------------------------------------------------------- 
String NomeCompleto RetornaNome("Gabriel","Magalhaes") 
  Serial.println(NomeCompleto);
  delay(3000);
  */
  
  Serial.println(media(n1,n2));
  delay(3000);
  }

float media(float a, float b){

float m = (a+b)/2;
  
  return m;



}