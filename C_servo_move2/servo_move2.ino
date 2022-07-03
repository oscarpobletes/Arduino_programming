//Same exercise as servo_move, different method and parameters
#include <Servo.h> //Library
Servo myservo; //Declare the servomotor
int i=0;
void setup() {
  myservo.attach(3);
  myservo.read(); //Returns the angle of the servomotor at that time
  myservo.attached(); //No parameters
// Checks if the object is connected to any pin on the board, if so it returns “true”, otherwise it returns “false”.
}

void loop() {
  //From 0 to 180
  for(i=1000;i<2000;i++){
    myservo.writeMicroseconds(i); /* The parameter of this function is the duration of the control signal pulse. If the parameter has a value of 1500 the axis remains in the central position (90 °), a value of 1000 (0 °)
    makes it move to the minimum position and one of 2000 takes it to the other extreme (180 °). It is necessary to test the servomotor to know its limits, it is not advisable to exceed them since a state of high current would be generated.*/
    delay(10);
  }
  //fro  180 to 0
  for(i=2000;i>=1000;i--){
    myservo.writeMicroseconds(i);
    delay(10);
  }
}
