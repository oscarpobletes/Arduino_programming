char color; // It is important that it be of type char and not byte
byte brightness;
byte RedLed=5;
byte GreenLed=6;
byte YellowLed=9;
void setup() {
  Serial.begin(9600);
  pinMode(RedLed,OUTPUT);
  pinMode(GreenLed,OUTPUT);
  pinMode(YellowLed,OUTPUT);
  analogWrite(RedLed,0); //brightness 0, off
  analogWrite(GreenLed,0);
  analogWrite(YellowLed,0);

}

void loop() {
// Reading of the first character received by the serial channel
if(Serial.available()>0){
  color=Serial.read();
  if(color=='r'||color=='g'||color=='y'){
delay(5);
// Extraction of the number that follows the first letter
  brightness=byte(Serial.parseInt());
  if(color=='r'){
    analogWrite(RedLed,brightness);
  } else if(color=='g'){
    analogWrite(GreenLed,brightness);
  } else if(color=='y'){
    analogWrite(YellowLed,brightness);
  }
}
}
delay(100); // Wait to receive the serial data correctly
}
