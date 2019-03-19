#include<AFMotor.h>
AF_DCMotor motor1(1);
void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(100);

}

void loop() {
  // put your main codehere, to run repeatedly:
  motor1.run(FORWARD);
  delay(1000);

}
