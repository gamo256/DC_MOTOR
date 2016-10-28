#include <MOTOR.h>

const int IN1 = 3;
const int IN2 = 5;
const int IN3 = 6;
const int IN4 = 9;

MOTOR driver(IN1,IN2,IN3,IN4); 
int time_delay = 500;
int speed = 255;
void setup()
{
}

void loop()
{
  driver.forward(speed,time_delay);
  driver.full_stop(time_delay);
  driver.turn_right(speed,time_delay);
  driver.full_stop(time_delay);
  driver.turn_left(speed,time_delay);
  driver.full_stop(time_delay);
  driver.backward(speed,time_delay);
}