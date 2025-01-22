#include <Servo.h>
Servo servo1;

void setup() {
  Serial.begin(9600);

  pinMode(4, OUTPUT); // Light control
  pinMode(3, OUTPUT); // Motor signal control
  pinMode(0, INPUT); // Button control

  servo1.attach(3, 0, 180);
}

void loop() {
  if (digitalRead(0) == HIGH)
  {
    while(true) 
    {
      activeState();
    }
  } else 
  {
    inactiveState();
  }
  digitalWrite(5, HIGH);
  
}

void activeState()
{
  digitalWrite(4, HIGH);
  servo1.write(0);
  delay(500);
  servo1.write(180);
  delay(500);
  Serial.println("Activity! Button is not being pressed!");
}

void inactiveState()
{
  digitalWrite(4, LOW);
  Serial.println("Active button. No action.");
}