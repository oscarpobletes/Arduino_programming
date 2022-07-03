int buttonstate=0; //Will save the button state (High or Low)
void setup() {
pinMode(4,OUTPUT); //LED IS AN OUTPUT
pinMode(8,INPUT); // BUTTON MUST BE AN INPUT
}

void loop() {
buttonstate=digitalRead(8);
//If the button is pushed, the led will be on
if(buttonstate==HIGH){
  digitalWrite(4,HIGH);
  // If not, led will be off
} else{
  digitalWrite(4,LOW);
}
}
