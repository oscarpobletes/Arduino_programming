/*Testing string functions on Arduino*/
String str1="Arduino is awesome";
String str2="La materia de Microcontroladores";
byte pos=0;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
Serial.println("String 1: ");
Serial.println(str1);
Serial.println("Strig 2: ");
Serial.println(str2);
Serial.println("Length does the following: ");
Serial.println(str1.length());
Serial.println("endsWith does the following: ");
Serial.println(str1.endsWith("e"));
Serial.println("startsWith does the following: ");
Serial.println(str1.startsWith("L"));
Serial.println("compareTo does the following: ");
Serial.println(str1.compareTo(str2));
Serial.println("equals does the following: ");
Serial.println(str1.equals(str2));
Serial.println("equalsIgnoreCase does the following: ");
Serial.println(str1.equalsIgnoreCase("ARDUINO IS AWESOME"));
Serial.println("indexOf does the following: ");
Serial.println(str1.indexOf("is"));
Serial.println("lastIndexOf does the following: ");
Serial.println(str1.lastIndexOf("awesome"));
Serial.println("charAt does the following: ");
Serial.println(str1.charAt(2));
Serial.println("substring does the following: ");
Serial.println(str1.substring(4,10));
Serial.println("replace does the following: ");
str1.replace(str1,str2);
Serial.println(str1);
Serial.println("toLowerCase does the following: ");
str1.toLowerCase();
Serial.println(str1);
Serial.println("toUpperCase does the following: ");
str1.toUpperCase();
Serial.println(str2);
Serial.println("concat does the following: ");
str1.concat(":)");
Serial.println(str1);
}
void loop() {
// put your main code here, to run repeatedly:
}
