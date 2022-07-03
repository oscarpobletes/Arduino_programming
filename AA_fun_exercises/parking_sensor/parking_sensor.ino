//pin condiguration for ultrasonic sensor
#define GREENLED 2
#define YELLOWLED 3
#define REDLED 4
#define TRIGGER 5
#define ECHO 6
#define BUZZER 9
 
// Constantes
const float sound = 34300.0; // Sound speed in cm/s
const float threshold1 = 30.0;// Far distance (warning)
const float threshold2 = 20.0; // Average distance (alert)
const float threshold3 = 10.0; // Close distance (danger)
 
void setup() {
  Serial.begin(9600);
  pinMode(GREENLED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);
  pinMode(REDLED, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(TRIGGER, OUTPUT);
  pinMode(BUZZER, OUTPUT);
 
  shutdownLEDs();
 
}
 
void loop() {
  // Prepare the ultrasonic sensor
  iniTrigger();
 
  // Get distance
  float distance = calcDistance();
 
  // shut all leds 
  shutdownLEDs();
 
// We launch an alert if we are within the danger range
  if (distance < threshold1)
  {
    // Lunch alert
    alert(distance);
  }
 
}
 
void shutdownLEDs()
{
  digitalWrite(GREENLED, LOW);
  digitalWrite(YELLOWLED, LOW);
  digitalWrite(REDLED, LOW);
}
 
// Function that checks if there is a presence or audible alert to be launched
void alert(float distance)
{
  if (distance < threshold1 && distance >= threshold2)
  {
    // Turn green led, buzzer sound calmly
    digitalWrite(GREENLED, HIGH);
    tone(BUZZER, 3000, 200);
  }
  else if (distance < threshold2 && distance > threshold3)
  {
    // Turn yellow led, buzzer sound warning
    digitalWrite(YELLOWLED, HIGH);
    tone(BUZZER, 2500, 200);
  }
  else if (distance <= threshold3)
  {
    // Turn red led, buzzer sound alerting
    digitalWrite(REDLED, HIGH);
    tone(BUZZER, 2000, 200);
  }
}
 
// Method that calculates the distance at which an object is located.
// Returns a float type variable that contains the distance
float calcDistance()
{
// The pulseIn function gets the time it takes to switch between states, in this case HIGH
  unsigned long times = pulseIn(ECHO, HIGH);
// We obtain the distance in cm, we must convert the time into seconds since it is in microseconds
  // so multiply by 0.000001
  float distance = times * 0.000001 * sound / 2.0;
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  delay(500);
 
  return distance;
}
 
// Method that starts the trigger sequence to start measuring
void iniTrigger()
{
// We put the Triiger in low state and wait 2 ms
  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(2);
 
// We set the Trigger pin high and wait 10 ms
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
 
// We start by putting the Trigger pin in low state
  digitalWrite(TRIGGER, LOW);
}
