/*

	Programa piscar led no arduino

	Materiais para arduino Uno
    
    01 - Placa arduino Uno
    01 - Cabo de comunicação
    02 - Jumper macho-macho
    01 - Protoboard
	01 - Led
    01 - Resistor 330ohms (laranja; laranja; marrom; dourado)

	Blibliotecas
    *
    *
    *
    	Esquema para ligação Led
    		Arduino porta digital 13 / LED: anodo + 
            Arduino GND              / Resistor GND
            Resistor                 / LED: catodo -
            
	Autor: Gabriel Souza       Data: 25/04/2024
      
*/

void setup ()
{
	pinMode(13,OUTPUT);

}


void loop ()
{
	digitalWrite(13,HIGH); //acende o led
	delay (100);           //aguarda um intervalo de um milésimo de segundo
	digitalWrite(13,LOW);  //apaga o led
	delay(100);            //aguarda um intervalo de um milésimo de segundo


}
