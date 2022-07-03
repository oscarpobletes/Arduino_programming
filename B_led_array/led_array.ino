//Same exercise as led_sequence, different method and delay.
//This array has the number of the pins where they are connected
byte leds[]={6,7,8};
byte i=0; //for cycle variable
int del=30;//delay variable
void setup() {
//The loop goes through the three elements of the array
for(i=0;i<=2;i++){
  pinMode(leds[i],OUTPUT);
}
}

void loop() {
for(i=0;i<2;i++){
  digitalWrite(leds[i],HIGH);
  delay(del);
  digitalWrite(leds[i+1],HIGH);
  delay(del);
  digitalWrite(leds[i],LOW);
  delay(del*2); //waits the double
}

// LEDs flash, 8 to 6
// Pay attention to the limits of the for loop
for(i=0;i<2;i--){
  digitalWrite(leds[i],HIGH);
  delay(del);
  digitalWrite(leds[i-1],HIGH);
  delay(del);
  digitalWrite(leds[i],LOW);
  delay(del*2);
}
}
