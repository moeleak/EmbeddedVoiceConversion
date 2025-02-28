#include "Arduino.h"

const int ledPin = 13;

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.println("Hello world!");
  delay(1000);

  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(ledPin, LOW);
  delay(1000);
}
