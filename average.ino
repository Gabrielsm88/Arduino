void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  Serial.println("Digite o primeiro numero: ");
  while (!Serial.available()); // aguarda a entrada do usuario
  int num1 = Serial.parseInt(); // Le o valor digitado com string e converte para inteiro
  Serial.println("O valor digitado " + String(num1));
  
  Serial.println("Digite o segundo numero: ");
  while (!Serial.available()); // aguarda a entrada do usuario
  int num2 = Serial.parseInt(); // Le o valor digitado com string e converte para inteiro
  Serial.println("O valor digitado " + String(num2));
  
  Serial.println("Digite o terceiro numero: ");
  while (!Serial.available()); // aguarda a entrada do usuario
  int num3 = Serial.parseInt(); // Le o valor digitado com string e converte para inteiro
  Serial.println("O valor digitado " + String(num3));
  
  float media = (num1 + num2 + num3) / 3.0;
  Serial.print("A media dos numeros e: " + String(media));
  Serial.println("\n****************************************");
  
  delay(1000);
  
  
}