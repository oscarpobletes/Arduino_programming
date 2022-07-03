int buttonstate=0; // Keeps the button state
int i=0;
void setup() {
pinMode(4,OUTPUT); //LED IS AN OUPUT
pinMode(8,INPUT); // BUTTON MUST BE AN INPUT
}

void loop() {
buttonstate=digitalRead(8);//Checks the state of the button
if(buttonstate==HIGH){
  for(i=0;i<5;i++){ //If the button is pushed, the led wil blink five times
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  delay(1000);
  }
} else{
  digitalWrite(4,LOW);
}
}
