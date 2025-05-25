void setup(){
  Serial.begin(9600);
}

void loop(){
  
  Serial.println("Informe qual a tabuada: ");
  while(!Serial.available());
  int n = Serial.parseInt();
  
  for(int i = 1 ;i <= 20 ; i++ ){
  
    int resultado = i * n;
      Serial.println(String(n) + " x " + String(i) + " = " + String(resultado));
 	delay(1000);
  
  }
 
}