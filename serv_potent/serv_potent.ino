#include <Servo.h>
//   1   2
//     3
Servo servo_1;
Servo servo_2;
Servo servo_3;
int angle;
int potpin_1 = 0;
int potpin_2 = 1;
int val1;
int val2;
int val3;

void setup()
{
  servo_1.attach(9);
  servo_2.attach(10);
  servo_3.attach(11);
  
  angle = 90;
  servo_1.write(angle);
  servo_2.write(angle);
  servo_3.write(angle);
  delay(10000);
}

void loop()
{
//  val1 = analogRead(potpin_1);
//  val2 = analogRead(potpin_2);
//  val1 = map(val1, 0, 1023, 0, 180);
//  val2 = map(val2, 0, 1023, 0, 180);
//  val3 = map(val3, 0, 1023, 0, 180);
  angle = 0;
  servo_1.write(angle);
  servo_2.write(angle);
  servo_3.write(angle);
  delay(3000);
  angle = 180;
  servo_1.write(angle);
  servo_2.write(angle);
  servo_3.write(angle);
  delay(3000);
}
