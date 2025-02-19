// Author:      Dominic M.
// Created:     2025-02-19
// Description: This is the blinker program.

int blinkTime = 1000;

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // Repeat until program stopped
    digitalWrite(LED_BUILTIN, HIGH);
    delay(blinkTime); // Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(blinkTime); // Wait for 1000 millisecond(s)

    blinkTime = blinkTime + 1000; // Make it blink 1 second longer each time.
}