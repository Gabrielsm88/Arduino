void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a primeira nota: ");
  while (!Serial.available()); 
  float sprint1 = Serial.parseFloat(); 
  Serial.println("O valor digitado " + String(sprint1));
  
  Serial.println("Digite a segunda nota: ");
  while (!Serial.available()); 
  float sprint2 = Serial.parseFloat(); 
  Serial.println("O valor digitado " + String(sprint2));
  
  Serial.println("Digite a terceira nota: ");
  while (!Serial.available()); 
  float sprint3 = Serial.parseFloat(); 
  Serial.println("O valor digitado " + String(sprint3));
  
  Serial.println("Digite a quarta nota: ");
  while (!Serial.available()); 
  float sprint4 = Serial.parseFloat(); 
  Serial.println("O valor digitado " + String(sprint4));
  
  float media = (( sprint1 + sprint2 + sprint3 + sprint4)/4.0);
  Serial.println("A media das 4 sprints e : " + String (media));

  Serial.println("Digite a quantidade de faltas: ");
  while (!Serial.available());
  int faltas = Serial.parseInt();
  if (faltas > 25)
  {
	Serial.println("Reprovado na sprint");
  }
  Serial.println("Faltas: " + String(faltas));
  
  
  float peso1 = (media*0.75);
  float peso2 = (faltas*0.25);
  float mediaponderada =(peso1+peso2);
  Serial.println("A media ponderada e : " + String (mediaponderada));
  Serial.println("\n****************************************************");
  delay(10000);
    
}