/*
	Author:      Dominic M.
	Created:     2025-02-24
	Description: This is the blinker program, using a breadboard.
*/

const int PIN_5 = 5;
int blinkTime = 1000;

void setup()
{
    pinMode(PIN_5, OUTPUT);
}

void loop()
{
    // Repeat until program stopped
    digitalWrite(PIN_5, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    digitalWrite(PIN_5, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)

	blinkTime += 1000; // Blink for 1 second longer each time.
}