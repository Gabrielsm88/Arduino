bool ld = 0;
int led1 = 2;
int led2 = 3;
int botao1 = 6;
int botao2 = 7;

void setup(){

pinMode(led1,OUTPUT);
pinMode(botao1,INPUT_PULLUP);
pinMode(led2,OUTPUT);
pinMode(botao2,INPUT_PULLUP);
  
}

void loop(){
    
  while (!digitalRead(botao1) == HIGH) {
  ld = !ld;
  digitalWrite(led1,ld); 
  delay(250);
  digitalWrite(led1, LOW);
  }
  while (!digitalRead(botao2) == HIGH) {
  ld = !ld;
  digitalWrite(led2,ld); 
  delay(250);
  digitalWrite(led2, LOW);
  }
} 
  
