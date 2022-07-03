/*************/
/*TRAFFIC LIGHT*/
/*************/

/*** Óscar Poblete Sáenz ***/
int i=0;
int red=6;       // define the value of the pin for the red led
int yellow=7;  //define the value of the pin for the yellow led
int green=8;     // define the value of the pin for the green led


void setup() {
  //declare the pins of the leds as outputs
  pinMode(green,OUTPUT);   
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);     
}

void loop() {
 digitalWrite(green,HIGH); //Turn on red led
 delay(2000);             //wait 2 seconds
 digitalWrite(green,LOW);  //Turn off red led
 delay(500);              //wait half second

 //Making it blink three times
 for (i=0;i<3;i++){
 digitalWrite(yellow,HIGH); //Turn on yellow led
 delay(500);                 //wait 2 seconds
 digitalWrite(yellow,LOW);  //Turn off yellow led
 delay(500);                  //wait half second
 }
 
 digitalWrite(red,HIGH); //Turn on green led
 delay(2000);              //wait 2 seconds
 digitalWrite(red,LOW);  //Turn off green led
 delay(500);               //wait half second
}
