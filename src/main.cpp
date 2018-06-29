#include "Arduino.h"

int LED=14;

void setup()
{
   Serial.begin(115200);
   pinMode(LED, OUTPUT);
}

void loop()
{
  Serial.println("blink");
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
