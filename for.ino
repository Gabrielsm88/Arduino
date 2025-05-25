void setup()
{
  Serial.begin(9600);
  for(int i = 5; i > 0; i--){
  Serial.println("valor de i: " + String(i));
  delay(1000);
  }
}

void loop(){}