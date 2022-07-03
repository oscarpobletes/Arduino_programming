/*A potentiometer is a simple knob that provides a variable resistance,
which we can read into the Arduino board as an analog value.*/
int valPot=0; //On analog side
int voltage=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valPot=(analogRead(2)*voltage/1023);
Serial.print("Volts: ");
Serial.println(valPot);
delay(1000);
}
