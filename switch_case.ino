
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Informe qual fruta voce deseja: \n1 - banana \n2 - pesssego \n3 - uva");
	while(!Serial.available());
  int fruta = Serial.parseInt();
  
  switch (fruta)
  {
    case 1:
  	Serial.println("\nA duzia de bananas custao R$ 8,00 Reais\n");
	break;
  
    case 2:
  	Serial.println("\nA duzia de pessegos custao R$ 20,00 Reais\n");
	break;
  
    case 3:
  	Serial.println("\nO quilo das uvas R$ 15,00 Reais\n");
	break;
  
  	default:
  	Serial.println("\nFruta sem estoque\n");
	break;
   }
}