// C++ code
//
#include <Servo.h>

int POS = 0;

int i = 0;

int j = 0;

Servo servo_6;

void setup()
{
  servo_6.attach(6, 500, 2500);

}

void loop()
{
  POS = 0;
  for (POS = 1; POS <= 90; POS += 1) {
    servo_6.write(POS);
    delay(25); // Wait for 25 millisecond(s)
  }
  for (POS = 90; POS >= 0; POS -= 1) {
    servo_6.write(POS);
    delay(25); // Wait for 25 millisecond(s)
  }
}