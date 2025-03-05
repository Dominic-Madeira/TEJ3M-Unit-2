/*
  Author:      Dominic M.
  Created:     2025-02-28
  Description: This changes the color of an RGB LED continuously
*/

const int PIN_11 = 11;
const int PIN_12 = 12;
const int PIN_13 = 13;
int blinkTime = 1000;

void setup()
{
    pinMode(PIN_11, OUTPUT);
    pinMode(PIN_12, OUTPUT);
    pinMode(PIN_13, OUTPUT);
}

void loop()
{
    // Repeat until program stopped
    // Turn LED Green
    digitalWrite(PIN_11, HIGH);
    digitalWrite(PIN_12, LOW);
    digitalWrite(PIN_13, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED Blue
    digitalWrite(PIN_11, LOW);
    digitalWrite(PIN_12, HIGH);
    digitalWrite(PIN_13, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED Red
    digitalWrite(PIN_11, LOW);
    digitalWrite(PIN_12, LOW);
    digitalWrite(PIN_13, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED Yellow
    digitalWrite(PIN_11, HIGH);
    digitalWrite(PIN_12, LOW);
    digitalWrite(PIN_13, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED Purple
    digitalWrite(PIN_11, LOW);
    digitalWrite(PIN_12, HIGH);
    digitalWrite(PIN_13, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED Cyan
    digitalWrite(PIN_11, HIGH);
    digitalWrite(PIN_12, HIGH);
    digitalWrite(PIN_13, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED White
    digitalWrite(PIN_11, HIGH);
    digitalWrite(PIN_12, HIGH);
    digitalWrite(PIN_13, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    // Turn LED Off
    digitalWrite(PIN_11, LOW);
    digitalWrite(PIN_12, LOW);
    digitalWrite(PIN_13, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)
}