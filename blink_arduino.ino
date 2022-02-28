/*
Blink

Turns on an LED for one second, then off for one second, repeatedly.

Created by: Daria Bernice Calitis
Created on: Feb 2022

*/

int pin4 = 4;

void setup()
{
  pinMode(pin4, OUTPUT);
}

void loop()
{
  digitalWrite(pin4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
