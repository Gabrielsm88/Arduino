int pinoLed = 3;
float luminosidadeLed = 0;
float pinoPotencia = A5;

void setup()
{
 pinMode(pinoPotencia, INPUT);
 pinMode(pinoLed, OUTPUT);
 Serial.begin(9600);
}


void loop()
{
 luminosidadeLed = map(analogRead(pinoPotencia),0,1023,0,255)  ;
 analogWrite(pinoLed, luminosidadeLed);
 Serial.println(luminosidadeLed);
  
}