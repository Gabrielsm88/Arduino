int botao = 4;
int led = 2;
bool estado = 0;

void setup() {
  pinMode(botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(botao) == LOW) {
    estado = !estado;
    digitalWrite(led, estado);
    
    // Aguarda o botão ser solto
    while (digitalRead(botao) == LOW);
    delay(100); 
    
    Serial.println(estado);
  }
}
