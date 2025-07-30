#include <Arduino.h>

const int pwmPins[3] = {2, 3, 4};
const int tachoPins[3] = {5, 6, 7};

volatile unsigned long pulseCounts[3] = {0, 0, 0};
unsigned long lastCheck = 0;
int rpm[3] = {0, 0, 0};

void tacho0() { pulseCounts[0]++; }
void tacho1() { pulseCounts[1]++; }
void tacho2() { pulseCounts[2]++; }

void setup()
{
  analogWriteFreq(25000);
  for (int i = 0; i < 3; i++)
  {
    pinMode(pwmPins[i], OUTPUT);
    analogWrite(pwmPins[i], 128);
    pinMode(tachoPins[i], INPUT_PULLUP);
  }
  attachInterrupt(digitalPinToInterrupt(tachoPins[0]), tacho0, FALLING);
  attachInterrupt(digitalPinToInterrupt(tachoPins[1]), tacho1, FALLING);
  attachInterrupt(digitalPinToInterrupt(tachoPins[2]), tacho2, FALLING);
  Serial.begin(115200);
}

void loop()
{
  if (millis() - lastCheck >= 1000)
  {
    noInterrupts();
    unsigned long p[3] = {pulseCounts[0], pulseCounts[1], pulseCounts[2]};
    for (int i = 0; i < 3; i++)
      pulseCounts[i] = 0;
    interrupts();

    for (int i = 0; i < 3; i++)
      rpm[i] = (p[i] * 60) / 2;

    Serial.print("RPM: ");
    Serial.print(rpm[0]);
    Serial.print(" ");
    Serial.print(rpm[1]);
    Serial.print(" ");
    Serial.println(rpm[2]);

    lastCheck = millis();
  }
}
