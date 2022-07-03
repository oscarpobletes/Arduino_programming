byte i=0; // for cycle variable
int del=100; //marks the time of delay()
void setup() {
for (i=6;i<=8;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
  //LEDs 6 to 8 blink
for(i=6;i<=8;i++){
  digitalWrite(i,HIGH);
  delay(del);
  digitalWrite(i,LOW);
}
/* LEDs 8-1 (7) to 6 + 1 (7) flash. In this particular case,
no loop would have been needed because there is only one LED between both ends (the 7th)
but it is left as a demonstration for possible extensions */
for(i=7;i>=7;i--){
  digitalWrite(i,HIGH);
  delay(del);
  digitalWrite(i,LOW);
}
}
