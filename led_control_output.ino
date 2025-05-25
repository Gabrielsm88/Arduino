void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if(Serial.available() > 0) //Verifica se ta recebendo algo na serial
  {
  char vLido = Serial.read();
  vLido = tolower(vLido); //tolower = converte para minuscula / toup = converte para maiuscula

  switch(vLido)
  {
  case 'a': digitalWrite(13,!digitalRead(13)); break;
  case 'b': digitalWrite(12,!digitalRead(12)); break;
  case 'c': digitalWrite(11,!digitalRead(11)); break;
  default: 
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  break;
  }
 }
}