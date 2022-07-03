/* Or also turn on the LED only if the value read from the
potentiometer exceeds a certain threshold: */
int valPot=0;
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
valPot=analogRead(2);
if (valPot>500){
  digitalWrite(9,HIGH);
}else{
  digitalWrite(9,LOW);
}
delay(valPot);
}
