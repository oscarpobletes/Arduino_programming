/*Turn led on and off with an infrared  
2 resistors of 100 ohms
1 3.3 kohm resistor
1 emitting infrared led
1 led infrared receiver
1 ultra bright white led
1 servomotor */
int IRreadPin=A0;
int LED=6;
void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
int IRread=analogRead(IRreadPin);
Serial.println(IRread);
if(IRread<600){
  digitalWrite(LED,HIGH);
}
else{
  digitalWrite(LED,LOW);
}
}
