char character;
String command;

void setup() {
Serial.begin(9600);
}

void loop() {
/* It reads character by character that is received through the serial channel (as long as some data arrives there),
 and they are concatenated one after the other in a chain called command. In practice, if we use the "serial monitor"
 the while loop will end when we press Enter, The delay is convenient so as not to saturate the serial channel and that the concatenation is made of
 ordered form */

 while (Serial.available()>0){
  character=Serial.read();
  command.concat(character);
  delay(10);
 }
 Serial.print(command);
 if(command.length()>1)
 for (int i=0; i<command.length();i++){
  Serial.print(" ");
  Serial.print((int) command.charAt(i));
 }

//Serial.println();
/* Once the string is "finished", its value is checked and the Arduino board is made
 react according to this. Here we could do what we want: if the command is "such",
 lights an LED, if it is "which one", it starts a motor ... and so on */
 if(command.equals("hello\n")==true){
  Serial.println("\nThe command is hello");
 }
  if(command.equals("goodbye\n")==true){
  Serial.println("\nThe command is goodbye");
 }
// The chain is cleaned to receive the next command again
 command="";
}
