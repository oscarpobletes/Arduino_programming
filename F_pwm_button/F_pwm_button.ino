int brightness=0;
void setup() {
pinMode(9,OUTPUT);//PWM LED
pinMode(8,INPUT);//PWM BUTTON
}

void loop() {
while(digitalRead(8)==HIGH && brightness<=255){
  analogWrite(9,brightness);
  delay(200);
  brightness=brightness+5;
}
  brightness=0;
  analogWrite(9,0);
}
