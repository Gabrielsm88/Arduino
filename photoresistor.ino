void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int leitura_analogica = analogRead (A0);
  Serial.println("Leitura Analogica: " + String(leitura_analogica));
  
  (leitura_analogica >= 930)? digitalWrite(2,LOW) : digitalWrite(2, HIGH);
  
  
  
  delay(1000);
  
  
}