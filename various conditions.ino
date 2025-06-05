//Acenda o LED na saída 9 se apenas uma das chaves estiver na posição de cima
//Caso contrário, o LED deve estar apagado
//Acenda o LED na saída 11 se duas das chaves estiverem na posição de cima
//Caso contrário, o LED deve estar apagado
//Acenda o LED na saída 13 se todas as chaves estiverem na posição de cima
//Caso contrário, o LED deve estar apagado

int b_desliz1 = 1;
int b_desliz2 = 0;
int b_desliz3 = 2;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(b_desliz1, INPUT_PULLUP);
  pinMode(b_desliz2, INPUT_PULLUP);
  pinMode(b_desliz3, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(b_desliz1) or digitalRead(b_desliz2) or digitalRead(b_desliz3) == HIGH)
  	{
      digitalWrite(9, HIGH);
  	  delay(1000);
  	}
  else
   {
    digitalWrite(9, LOW);
  }
  if (digitalRead(b_desliz1) and digitalRead(b_desliz2) or digitalRead(b_desliz2) and digitalRead(b_desliz3) or digitalRead(b_desliz1) and digitalRead(b_desliz3) == HIGH)
  	{
      digitalWrite(11, HIGH);
  	  delay(1000);
  	}
  else
   {
    digitalWrite(11, LOW);
   }
  if (digitalRead(b_desliz1) and digitalRead(b_desliz2) and digitalRead(b_desliz3) == HIGH)
  	{
      digitalWrite(13, HIGH);
  	  delay(1000);
  	}
  else
   {
    digitalWrite(13, LOW);
   }
}
