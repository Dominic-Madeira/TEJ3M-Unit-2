/*
  Author:      Dominic M.
  Created:     2025-03-18
  Description: This spins a motor 180 degrees and back continuously
*/

#include <Servo.h>

const int PIN_9 = 9;
const int minPulseWidth = 500;
const int maxPulseWidth = 2500;
const int minPosition = 0;
const int maxPosition = 180;
const int delayTime = 15;
const int motorSpeed = 1;
int currentPosition = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(PIN_9, minPulseWidth, maxPulseWidth);
}

void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (currentPosition = minPosition; currentPosition <= maxPosition; currentPosition += motorSpeed) {
    // tell servo to go to position in variable 'currentPosition'
    servo_9.write(currentPosition);
    // wait 15 ms for servo to reach the position
    delay(delayTime); // Wait for 15 millisecond(s)
  }
  
  for (currentPosition = maxPosition; currentPosition >= minPosition; currentPosition -= motorSpeed) {
    // tell servo to go to position in variable 'currentPosition'
    servo_9.write(currentPosition);
    // wait 15 ms for servo to reach the position
    delay(delayTime); // Wait for 15 millisecond(s)
  }
}