int a = 10;
  int b = 3;
  int c = 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
c = a+b;
  //Serial.print("A soma entre a + b = ");
  //Serial.println(c);
  
  Serial.println("A soma entre a + b = " + String(c));
  c = a-b;
  Serial.println("A diferenca entre a - b = " + String(c));
  c = a*b;
  Serial.println("A multiplicacao entre a * b = " + String(c));
  c = a/b;
  Serial.println("A divisao entre a / b = " + String(c));
  c = a%b;
  Serial.println("O resto entre a % b = " + String(c));
  c = a%b;
  Serial.println("O resto da divisao entre " + String(a) + " % " + String(b) + " = " + String(c));
  delay(10000);

}