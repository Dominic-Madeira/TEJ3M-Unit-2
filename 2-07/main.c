/*
 * Author:      Dominic M.
 * Created:     2025-04-01
 * Description: Combines distance using sound with a motor that turns on and off
*/

#include <Servo.h>

const int TRIGGER_PIN = 12;
const int ECHO_PIN = 11;
const int PIN_9 = 9;
const float SPEED_OF_SOUND = 0.0343;
const int minPulseWidth = 500;
const int maxPulseWidth = 2500;
const int minPosition = 0;
const int maxPosition = 180;
const int delayTimeMotor = 15;
const int delayTime1 = 2;
const int delayTime2 = 10;
const int motorSpeed = 1;
const int maxDistance = 50;
int currentPosition = 0;
bool angleIncreasing = false;
float duration;
float distance;

Servo servoMotor;

void setup()
{
  servoMotor.attach(PIN_9, minPulseWidth, maxPulseWidth);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(delayTime1); // Wait 2 μs
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(delayTime2); // Wait 10 μs
  digitalWrite(TRIGGER_PIN, LOW);
  
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Distance = Speed * Time
  // Divide by 2 since it is going the distance twice, there and back
  distance = (duration * SPEED_OF_SOUND) / 2;
  
  // Print out distance calculated
  Serial.print("\nDistance: " + String(distance) + " cm");
  
  if (distance < maxDistance) {
    if (currentPosition == minPosition) {
      angleIncreasing = true;
    } else if (currentPosition == maxPosition) {
      angleIncreasing = false;
    }
    if (angleIncreasing) {
      currentPosition += motorSpeed;
    } else {
      currentPosition -= motorSpeed;
    }
    servoMotor.write(currentPosition);
    delay(delayTimeMotor); // Wait for 15 millisecond(s)
  }
}