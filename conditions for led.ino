//Programa que faz o LED acender quando o botão deslizante estive para cima e o botão apertado. 

int botao = 2;
int b_desliz = 3;

void setup(){
  pinMode(13, OUTPUT);
  pinMode(b_desliz, INPUT_PULLUP);
  pinMode(botao, INPUT_PULLUP);
}

void loop(){
  if (digitalRead(botao) and digitalRead(b_desliz) == HIGH)
  	{
      digitalWrite(13, HIGH);
  	  delay(1000);
  	}
  else
   {
    digitalWrite(13, LOW);
   }
}
