/* In addition to LEDs, a potentiometer can control other devices, such as a servomotor.
Exercise: Design the circuit according to the sketch shown, in order to turn the servomotor
a determined angle, according to the value read from the potentiometer. */
#include <Servo.h>
Servo myservo;
int valPot=0;
void setup() {
  myservo.attach(3);

}

void loop() {
  valPot=analogRead(0);
/* AnalogRead () values ​​range from 0 to 1023 and accepted values
 * per miservo.write () range from 0 to 180, that's why we readjust the value read for
 * be able to use it with the servomotor. */
 
 valPot=valPot*(180.0/1023.0);
 myservo.write(valPot);
 delay(15); //  gives servo time to move
}
