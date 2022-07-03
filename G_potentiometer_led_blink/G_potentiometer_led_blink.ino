/* Another way in which we can vary the brightness of an LED, with the same circuit of the exercise
above is to send a digital signal to the LED with digitalWrite (), that is, without intermediate values,
or turns on or off (HIGH, LOW) and the potentiometer reading is used as the delay () parameter
to set the blink time. The potentiometer goes to A2 (middle pin) */
int valPot=0;

void setup() {
pinMode(9,OUTPUT);//LED
}

void loop() {
valPot=analogRead(2);
digitalWrite(9,HIGH);
delay(valPot);
digitalWrite(9,LOW);
delay(valPot);
}
