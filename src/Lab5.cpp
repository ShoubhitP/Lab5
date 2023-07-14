/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/shoubhitsstuff/Desktop/Lab5/src/Lab5.ino"
void setup();
void loop();
#line 1 "/Users/shoubhitsstuff/Desktop/Lab5/src/Lab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup()
{
  pinMode(D5, OUTPUT);
  pinMode(A5, INPUT);
}

void loop()
{
  int reading = analogRead(A5);
  int LEDBrightness = map(reading, 0, 4095, 0, 255);
  analogWrite(D5, LEDBrightness);
}
