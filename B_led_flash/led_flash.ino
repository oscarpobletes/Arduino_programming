void setup() {
// Unsigned long variables are extended size variables for number storage,
//and store 32 bits (4 bytes). Unlike standard longs unsigned longs won’t store negative numbers, making their range from 0 to 4,294,967,295 (2^32 - 1).
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}
void loop() {

flash_led(6,200); //pin and delay values
flash_led(7,200);//function parameters
flash_led(8,200);//called to be executed
}
void flash_led(byte unled, unsigned long wait){
  digitalWrite(unled,HIGH);
  delay(wait);
  digitalWrite(unled,LOW);
  delay(wait);
}
