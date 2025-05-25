float C,F;
char repetir;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  do{
  Serial.println("Digite a temperatura em Celsius: ");
    while(!Serial.available());
    C = Serial.parseFloat();
    
   F = 9.0 * C / 5.0 + 32.0;
    
   Serial.print("Equilavente em Fahrenheit: " + String(F,2));
   Serial.println("\nDeseja repetir: (s/n)");
     while(!Serial.available());
   repetir = tolower(repetir = Serial.read());
    Serial.println(" ");
    
  }while(repetir == 's');
  {
  Serial.println("Fim");
  while(!Serial.available());

  };
 
}