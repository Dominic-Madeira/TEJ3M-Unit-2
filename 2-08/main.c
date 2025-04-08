/*
 * Author:      Dominic M.
 * Created:     2025-04-08
 * Description: Uses a potentiometer to control the angle of a servo motor.
*/

#include <Servo.h>

const int PIN_9 = 9;
const int POT_PIN = A0; // Pin for the potentiometer
const int MAX_POT_VALUE = 1023; // Maximum value from the potentiometer
const int minPulseWidth = 500;
const int maxPulseWidth = 2500;
const int minPosition = 0;
const int maxPosition = 180;
const int delayTime = 15;
const float scaleFactor = (maxPosition - minPosition) / (float)MAX_POT_VALUE; 
// Scale factor determines how much the potentiometer needs to turn to change the servo angle by one degree

Servo servoMotor;

void setup()
{
  pinMode(POT_PIN, INPUT); // Set the potentiometer pin as input
  servoMotor.attach(PIN_9, minPulseWidth, maxPulseWidth);
  Serial.begin(9600);
}

void loop()
{
  int potValue = analogRead(POT_PIN); // Read the potentiometer value (0-1023)
  Serial.println(String(potValue)); // Print the potentiometer value for debugging
  int servoAngle = potValue * scaleFactor; // Multiply the potentiometer value to scale factor to get the servo angle
  servoMotor.write(servoAngle); // Set the servo to the mapped angle
  delay(delayTime); // Small delay for smooth movement
}