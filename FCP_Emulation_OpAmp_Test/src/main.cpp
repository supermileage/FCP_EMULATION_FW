#include <Arduino.h>
#include <Wire.h>

int PWM_Pin = 3; /* give PWM_Pin name to D3 pin */
// Perform initialization inside setup()
void setup()
{
pinMode(PWM_Pin,OUTPUT);  /*declare D3 pin as an output pin */ 
}
// loop() executes continously 
void loop()
{
analogWrite(PWM_Pin,127);  /* Produce 50% duty cycle PWM on D3 */
}

// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(9600);
//   pinMode(12, OUTPUT);
// }

// void loop() {
//   // put your main code here, to run repeatedly;
// digitalWrite(12, HIGH);
// delay(100);
// digitalWrite(12, LOW);
// delay(900);
// }