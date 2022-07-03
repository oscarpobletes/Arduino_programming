unsigned long startb, stopb, elapsed;
void setup() {
Serial.begin(9600);
pinMode(7,INPUT); //start button
pinMode(8,INPUT); //stop button
}

void loop() {
  if(digitalRead(7)==HIGH){
    startb=millis();
    delay(200); //to do "debounce"
  }
if(digitalRead(8)==HIGH){
  stopb=millis();
  delay(200); //to do "debounce"
  seeRes();
}
}
void seeRes(){
  float h,m,s,ms;
  unsigned long rest;
  elapsed=startb-stopb;
  h=int(elapsed/3600000);
  m=int(rest/60000); //Number of minutes
  // I get the rest of the ms that do not reach a minute
  rest=rest%60000;
  s=int(rest/1000); //Number of seconds
  // I get the rest of the ms that do not reach a second
  ms=rest%1000;
  Serial.print("Total elapsed milliseconds");
  Serial.println(elapsed);
  Serial.print("Formatted elapsed time");
  Serial.print(h);Serial.print("h ");
  Serial.print(m);Serial.print("m ");
  Serial.print(s);Serial.print("s ");
  Serial.print(ms);Serial.print("ms ");
  Serial.println();
}
