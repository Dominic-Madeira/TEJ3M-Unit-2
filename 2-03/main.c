/*
	Author:      Dominic M.
	Created:     2025-02-24
	Description: This is the blinker program, using a breadboard.
*/

int blinkTime = 1000;
int pin5 = 5;

void setup()
{
    pinMode(pin5, OUTPUT);
}

void loop()
{
    // Repeat until program stopped
    digitalWrite(pin5, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    digitalWrite(pin5, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)
}