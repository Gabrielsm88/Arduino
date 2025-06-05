int botao = 2;
int deslizante = 3;
bool piscar = false;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  pinMode(deslizante, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(deslizante) == HIGH) {
    if (!piscar) {
      digitalWrite(8, HIGH);  
      digitalWrite(13, LOW);  
    }

    if (digitalRead(botao) == LOW && !piscar) {
      while (digitalRead(botao) == LOW);
      delay(100); 

      for (int i = 0; i < 10; i++) {
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
      }

      digitalWrite(13, HIGH);  
      digitalWrite(8, LOW);    
      piscar = true;   
    }
  } else {
    digitalWrite(8, LOW);
    digitalWrite(13, LOW);
    piscar = false;
  }
}
