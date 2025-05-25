void setup()
{
Serial.begin(9600);
}
  
void loop()
{
Serial.println("Digite sua idade: ");
  while (!Serial.available()); 
  int idade = Serial.parseInt(); 
  
  Serial.println("Digite sua altura: ");
  while (!Serial.available()); 
  float altura = Serial.parseFloat(); 
  
  Serial.println("Digite seu nome: ");
  while (!Serial.available()); 
  String nome = Serial.readString(); 
  
  Serial.println("A idade digitada: " + String(idade));
  Serial.println("A altura digitada: " + String(altura));
  Serial.println("O nome digitado: " + String(nome));
  delay(10000);
}