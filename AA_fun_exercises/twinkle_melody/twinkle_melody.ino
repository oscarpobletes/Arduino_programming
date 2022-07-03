#include "pitches.h" // LIBRARY OR ATTACHED FILE WHERE THE DEFINED NOTES COME

int Pin = 13;
int numTones = 15;
int tempo = 2.5;

//Twinkle Twinkle Little Star:

int tones[] = {NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, 0};

int duration[] = {500, 500, 500, 500, 500, 500, 1000, 500, 500, 500, 500, 500, 500, 1000, 4000};

void setup()
{
  for (int i = 0; i < numTones; i++)
  {
    tone(Pin, tones[i], duration[i] / tempo);
    delay(duration[i] / tempo);
  }
  noTone(Pin);
}

void loop()
{
}
