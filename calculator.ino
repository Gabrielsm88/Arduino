void setup(){Serial.begin(9600);}
void loop(){
  
menu();
  
}

void soma(){

	Serial.print("\nDigite o primeiro valor da soma: ");
	while(!Serial.available());
	float v1 = Serial.parseFloat();

	Serial.print("\n" + String(v1) + " + ");
	while(!Serial.available());
    float v2 = Serial.parseFloat();
          
    Serial.print("\n" + String(v1) + " + " + String(v2) + "\n");
          
    float resultado = v1 + v2;
    Serial.println("\nO resultado da soma entre: " + String(v1) + " + " + String(v2) + " = " + String(resultado));
    delay(1000);
    Serial.print(" ");
}   

void subtracao(){

Serial.print("\nDigite o primeiro valor da subtracao: ");
	while(!Serial.available());
	float v1 = Serial.parseFloat();

	Serial.print("\n" + String(v1) + " - ");
	while(!Serial.available());
    float v2 = Serial.parseFloat();
    Serial.print("\n" + String(v1) + " - " + String(v2) + "\n");
          
    float resultado = v1 - v2;
    Serial.println("\nO resultado da subtracao entre: " + String(v1) + " - " + String(v2) + " = " + String(resultado));
    delay(1000);
    Serial.print(" ");
}

void multiplicacao(){

Serial.print("\nDigite o primeiro valor da multiplicacao: ");
	while(!Serial.available());
	float v1 = Serial.parseFloat();

	Serial.print("\n" + String(v1) + " * ");
	while(!Serial.available());
    float v2 = Serial.parseFloat();
    Serial.print("\n" + String(v1) + " * " + String(v2) + "\n");
          
    float resultado = v1 * v2;
    Serial.println("\nO resultado da multiplicacao entre: " + String(v1) + " * " + String(v2) + " = " + String(resultado));
    delay(1000);
    Serial.print(" ");
}

void divisao(){

Serial.print("\nDigite o primeiro valor da divisao: ");
	while(!Serial.available());
	float v1 = Serial.parseFloat();

	Serial.print("\n" + String(v1) + " / ");
	while(!Serial.available());
    float v2 = Serial.parseFloat();
    Serial.print("\n" + String(v1) + " / " + String(v2) + "\n");
          
    float resultado = v1 / v2;
    Serial.println("\nO resultado da divisão entre: " + String(v1) + " / " + String(v2) + " = " + String(resultado));
    delay(1000);
    Serial.print(" ");
}

void menu(){

Serial.print("\nBem-vindo a calculadora digital, qual operacao deseja executar?");
Serial.print("\n1 - Soma \n2 - Subtracao \n3 - multiplicacao \n4 - divisao \n5 - Sair da calculadora");
while(!Serial.available());
  int res = Serial.parseInt();
  
switch(res){
  
  case 1: soma(); break;
  case 2: subtracao(); break;
  case 3: multiplicacao(); break;
  case 4: divisao(); break;
  case 5: 
  Serial.println("\nObrigado por usar a calculadora");
  Serial.end(); break;
  
  default:
   menu(); break;

  }
}