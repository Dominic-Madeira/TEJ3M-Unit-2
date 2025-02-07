// Author:      Dominic M.
// Created:     2025-02-07
// Description: This is the blinker program.


void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    // Repeat until program stopped
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
}
