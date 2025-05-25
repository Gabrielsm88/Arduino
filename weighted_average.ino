void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a nota da sprint 1 ");
  while (!Serial.available()); 
  float nota1 = Serial.parseFloat(); 
  Serial.println("Nota Sprint 1 = " + String(nota1,2));
  
  Serial.println("Digite a nota da sprint 2 ");
  while (!Serial.available()); 
  float nota2 = Serial.parseFloat(); 
  Serial.println("Nota Sprint 2 = " + String(nota2,2));
  
  Serial.println("Digite a nota da sprint 3 ");
  while (!Serial.available()); 
  float nota3 = Serial.parseFloat(); 
  Serial.println("Nota Sprint 3 = " + String(nota3,2));
  
  Serial.println("Digite a nota da sprint 4 ");
  while (!Serial.available()); 
  float nota4 = Serial.parseFloat(); 
  Serial.println("Nota Sprint 4 = " + String(nota4,2));

  Serial.println("Digite a quantidade de faltas: ");
  while (!Serial.available());
  int faltas = Serial.parseInt();
  Serial.println("Total de faltas = " + String(faltas));
  
  // calculo das medias ponderadas
  
  float media = ((nota1 + nota2 + nota3 + nota4) /4);
  float mediaPonderada = (media * 0.75);
  float mediaFaltas = (((100/25)* faltas) * 0.25);
  float mediaGeral = 25 + mediaPonderada - mediaFaltas;
  
  // mostrar o resultado
  
  Serial.println("Media ponderada das SPRINTS " + String(mediaPonderada,2));
  Serial.println("Media Geral " + String(mediaGeral,2));
  Serial.println("\n****************************************************");
  delay(10000);
    
}