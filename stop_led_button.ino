#define LedAz 2
#define LedVm 3
#define btnAz 7

void setup(){
pinMode(LedAz,OUTPUT);
pinMode(LedVm,OUTPUT);
pinMode(btnAz,INPUT_PULLUP);
}

void loop(){

while(!digitalRead(btnAz));
digitalWrite(LedAz,HIGH);
delay(500);
digitalWrite(LedAz,LOW);
delay(500);

while(!digitalRead(btnAz));
digitalWrite(LedVm,HIGH);
delay(500);
digitalWrite(LedVm,LOW);
delay(500);
}