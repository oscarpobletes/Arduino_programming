const int red_pin = 3;  // PIN number corresponding to the RED LED
const int green_pin = 5; // PIN number corresponding to the GREEN LED
const int blue_pin = 6; // PIN number corresponding to the BLUE LED

int red, green, blue;   // keeps the intensity of each color

String command; // keeps the command introduced

void setup()
{
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);

// With this function the necessary communication is started to be able to send messages from the arduino to the computer (console).
  Serial.begin(9600);
}

void loop()
{
// We check if the computer has communicated with our program.
  while (Serial.available() > 0)
  {
// We read and store the command entered.
    command = Serial.readString();
    clearCommand(&command);
    Serial.println(command);

// We check if the command matches any color.
    // ____________________________________________________________________________________________________________________
    if (command.equalsIgnoreCase("red"))
    {
      putColor(255, 0, 0);
    }
    else if (command.equalsIgnoreCase("green"))
    {
      putColor(0, 255, 0);
    }
    else if (command.equalsIgnoreCase("blue"))
    {
      putColor(0, 0, 255);
    }
    else
    {
      putColor(0, 0, 0);
    }
// ____________________________________________________________________________________________________________________
    //       COLOR LIST
    // ******************************
    // Cyan = Green and Blue
    // Magenta = Red and Blue
    // Yellow = Red and Green
    // White = Red, Green and Blue
    // Black = All off
    // ******************************
  }
}

// We remove any characters that may cause noise when we analyze the command.
void clearCommand(String * text)
{
  text->trim();
  text->replace('\n', '\0');
  text->replace('\r', '\0');
}
// With this function we apply the intensity of the color to each LED.
void putColor(int red, int green, int blue)
{
  analogWrite(red_pin, red);
  analogWrite(green_pin, green);
  analogWrite(blue_pin, blue);
}
