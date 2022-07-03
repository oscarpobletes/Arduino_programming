/* Analog and PWM voltages. Adjust the brightness of a brightness of
a led depending on the voltage of a potentiometer */
const int led=3; //digital pin 3
const int pot=0;// analog pin A0
int brightness=0;
void setup() {
pinMode(led,OUTPUT);
/* analog pins are declared as input automatically */
}

void loop() {
/* we read the potentiometer value divided by 4 since only values ​​can be used
 * between 0 and 255 in analogWrite */
 brightness=analogRead(pot)/4;
/* analogWrite receives two values, the pin and the voltage intensity, the values
  * voltage range from 0 to 255 */
  analogWrite(led,brightness);
}
