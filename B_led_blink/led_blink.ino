void setup() {
  // put your setup code here, to run once:
  //Initialize pin 4 as an output
  //Inidcates where our LED is connected
  Serial.begin(9600);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(4,HIGH);//Turn on LED
delay(1000);//Wait one second
digitalWrite(4,LOW);//Turn off LED
delay(1000);//Wait one second
}
