void setup ()
{
 Serial.begin(9600); // inicia a municacao serial com velocidade de 9600
 pinMode(13,OUTPUT); // define o pino 12 do arduino para o led como saida
 Serial.println("Deseja ligar o Led?"); // escreve mensagem no monitor serial
 Serial.println("Digite 1 para ligar ou 2 para desligar o led"); // escreve mensagem no monitor serial
  
}
 

void loop ()
{
  if( Serial.available () > 0 ) // verifica se a serial esta recebendo dados
  {
    int valor = Serial.read() - '0'; // Converte o caractere recebido para um numero inteiro
    
    if(valor == 1) // verifica se o valor digitado e igual a 1 se sim executa as linhas abaixo do if
    {
      digitalWrite(13,HIGH); // liga o led do pino 13
      Serial.println("Led ligado"); //exibe mensagem no monitor serial
   
    }
    else if(valor == 2) // verifica se o valor digitado e igual a 2 se sim executa as linhas abaixo do if
    {
      digitalWrite(13,LOW); //desliga o led do pino 13
      Serial.println("Led desligado"); //exibe mensagem no monitor serial
    }
    else 
    {
      Serial.println("Opcao invalida. Digite 1 para ligar ou 2 para desligar o led"); //exibe mensagem no monitor serial
    }
      delay(1000); // aguarda 1 segundo
    
  }

}