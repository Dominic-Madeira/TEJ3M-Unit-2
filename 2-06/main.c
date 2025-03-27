/*
 * Author:      Dominic M.
 * Created:     2025-03-25
 * Description: Calculates the distance of an object using sound
*/

const int TRIGGER_PIN = 12;
const int ECHO_PIN = 11;
const float SPEED_OF_SOUND = 0.0343;
int delayTime1 = 2;
int delayTime2 = 10;
int delayTime3 = 100;
float duration;
float distance;

void setup()
{
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
  delay(delayTime3); // Wait 100 ms before restarting
}