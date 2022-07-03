#include <Servo.h> //Library
Servo myservo; //Declare the servomotor
int i=0; 
void setup() {
  myservo.attach(3);
}

void loop() {
  //from 0 to 180
  for(i=0;i<180;i++){
    myservo.write(i); // Receive a parameter to control the axis of the servomotor
    // The parameter is the angle in degrees to position the axis
    delay(20);
  }
  //from 180 to 0
  for(i=180;i>=0;i--){
    myservo.write(i);
    delay(20);
/* if 1.5 ms is held, the axis will move to the center position of its travel, that is to say 90 °, the travel that a servo can make goes from 0 ° to 180 °.
As long as the control signal does not change, the angle at which the axis is located will be maintained, if it changes, the servo axis will move to the new position.
To position the servo at 180 ° (maximum value) the pulse must be 2 ms long. Depending on the manufacturer, the maximum angle of the servo axis may vary. */
  }
}
