int current_state=0;
int last_state=0;
int counter=0;
void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);//Button
pinMode(8,INPUT); //LED
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//Reads the new current state of the button
current_state=digitalRead(8);

// If this changes with respect to the previous state ...
if (current_state !=last_state){
/* ...notifies it. Check that the change is a press and not a release. */
  if(current_state==HIGH){
    counter=counter+1;
   
/* Note that you have to put several Serial.print to interleave in a single statement
     * literal phrase with variable values ​​*/
       Serial.print("Press number: ");
       Serial.println(counter);
  }
}
//I save the current state for the next check
last_state=current_state;

/* We change the status of the Led by counting the times the button has been pressed
 * alternatively (even number = LED off, odd number = LED on)
 * We don't count when released! */
 if(counter%2==0){
  digitalWrite(4,LOW);
 }
 else{
  digitalWrite(4,HIGH);
 }
}
