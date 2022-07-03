#include <Servo.h>
Servo Myservo;
//We introduce the values of the servo this time
void setup() {
Serial.begin(9600);
Myservo.attach(3);
}

void loop() {
while(Serial.available()!=0){
  int x=Serial.parseInt();
  Serial.println(x);
  Myservo.write(x);
  delay(5);
}
}
