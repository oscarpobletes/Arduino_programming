/* 3 LEDs with their resistances to ground and their anodes to pins 5, 6 and 7. Place a button also with
its resistance on one side and on the other to pin 8 with one wire and at 5 V with the other. The LEDs will light up
and turning off sequentially, when the center LED lights up, the player must press the button, if he succeeds
the monitor will display and speed up the LED lighting sequence. The initial time
time between LED and LED is 200 ms, with each hit it will decrease by 20 ms, until it reaches 10 ms,
there it will start again in 200 ms */
int leds[]={7,8,9};
int i=0;
int del=200;
void setup() {
for(i=0;i<=2;i++){
  pinMode(leds[i],OUTPUT);
}
pinMode(8,INPUT); //Button
Serial.begin(9600);
}

void loop() {
// I go through the LEDs of the array, turning on and off
for(i=0;i<=2;i++);{
  digitalWrite(leds[i],HIGH);
  delay(del);
// Before turning off each LED, I check to see if the player got it right
  checkhit(); //proper function
  digitalWrite(leds[i],LOW);
  delay(del);
  
}
}
void checkhit(){
/* If you have pressed the button and right now the LED
   * index 1 within the array (the middle one), it was correct */
   if(digitalRead(8)==HIGH && i==1){
    Serial.println("Hit");
    del=del-20;
    if(del<10){
      del==200;
    }
   }
}
