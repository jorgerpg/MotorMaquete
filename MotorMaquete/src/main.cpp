#include <ESP32Servo.h>

#define motorPin 22
#define wait 25

Servo motor;

void setup() {
  motor.setPeriodHertz(50);
  motor.attach(motorPin, 500, 2400);
}

void loop() {
  for(int pos=0;pos<=180;pos++){
    motor.write(pos);
    delay(wait);
  }
  for(int pos=180;pos>=0;pos--){
    motor.write(pos);
    delay(wait);
  }
}
