//Programa que mostra os números de 0 a 9

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    delay(1000);
    digitalWrite(1, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(1000);
    digitalWrite(1, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  	digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    delay(1000);
    digitalWrite(1, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(1000);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(5000);
}