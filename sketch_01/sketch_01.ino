//Program: Servo Motor Controlled by Potentiometer
#include <Servo.h>

#define POT_PIN A0
#define SERVO_PIN D1

Servo servoMotor;

void setup() {
  servoMotor.attach(SERVO_PIN);
}

void loop() {
  int sensorValue = analogRead(POT_PIN);
  int servoPosition = map(sensorValue, 0, 1023, 0, 180);
  servoMotor.write(servoPosition);
  delay(15);
}