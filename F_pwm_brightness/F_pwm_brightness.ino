/*The PWM (Pulse Width Modulation) Outputs 
allow you to generate analog outputs from digital pins.*/
int brightness = 0; 
void setup(){ 

pinMode(9, OUTPUT); // The LED is connected to pin 9 (PWM)

} 

void loop(){ 

//Increase brightness (from minimum to maximum)

for(brightness = 0 ; brightness<= 255; brightness=brightness+5) { 

analogWrite(9, brightness); 

delay(30); 

} 

//Decrease the brightness (from maximum to minimum)

for(brightness = 255; brightness>=0; brightness=brightness-5) { 

analogWrite(9, brightness); 

delay(30); 

} 
}
