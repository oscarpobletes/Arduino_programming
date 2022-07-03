/* when the button is pressed, the servo axis changes position and when it is released it returns to the initial position. */
#include<Servo.h>
Servo myservo;
int pos; //servo position
void setup() {
  pinMode(2,INPUT);
  myservo.attach(9);
  myservo.write(pos);

}

void loop() {
  if(digitalRead(2)==HIGH)
  pos=180;
  else
  pos=0;

  myservo.write(pos);
}
