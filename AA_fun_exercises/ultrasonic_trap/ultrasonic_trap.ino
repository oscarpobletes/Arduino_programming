#include <Servo.h>
Servo push;
int trap_ready = 0;
int trap_closed= 180;
const float sound = 34300.0; // sound speed in cm/s

//Ultrasonic sensor configuration
#define trigger 4
#define echo 3
#define Pinservo 2


void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  push.attach(Pinservo);
  push.write(trap_ready);

}

void loop() {
  long duration, distance;
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH);
// We obtain the distance in cm, we must convert the time into seconds since it is in microseconds
  // so multiply by 0.000001
  distance = duration * 0.000001 * sound / 2.0;

  if (distance >= 20 || distance <= 0) {
    Serial.println ("Far target");
      push.write(trap_ready);
  }
  if (distance <= 10 && distance >= 1) {
    Serial.println("Target caught");
    push.write(trap_closed);
    Serial.print(distance);
    Serial.println(" cm");

  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
