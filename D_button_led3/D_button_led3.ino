
// IF A BUTTON IS PRESSED, IT TURNS ON ONE LED, IF IT IS LEFT PRESSED, IT TURNS ON THE OTHER
int buttonstate=0; //Saves the button state
void setup() {
pinMode(4,OUTPUT); //ONE LED
pinMode(8,INPUT); // BUTTON
pinMode(5,OUTPUT); //OTHER LED
}

void loop() {
buttonstate=digitalRead(8);
if(buttonstate==HIGH){
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
} else{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
}
