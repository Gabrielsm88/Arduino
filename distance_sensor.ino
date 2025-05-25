int trig = 4;
int echo = 2;
long cm,micro;

void setup(){

Serial.begin(115200);
  pinMode(echo, INPUT);
  pinMode(trig,OUTPUT);
}

void loop(){

digitalWrite(trig,LOW); //INICIANDO SENSOR
delay(2);
  
digitalWrite(trig,HIGH); //ENVIANDO SINAL POR 10 MILISSEGUNDOS
delay(10);
  
digitalWrite(trig,LOW); //FINALIZANDO O ENVIO DE SINAL
  
  micro = pulseIn(echo,HIGH); //LENDO O TEMPO DA ONDA EM MILISSEGUNDOS
  cm = micro/58; //trasformando em centimetros
  
  Serial.println(String(cm) + "cm");
  
}