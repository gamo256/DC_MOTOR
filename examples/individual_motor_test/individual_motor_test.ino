#include <MOTOR.h>

const int IN1 = 3;
const int IN2 = 5;
const int IN3 = 6;
const int IN4 = 9;

MOTOR driver(IN1,IN2,IN3,IN4); 
int time_delay = 500;
int speed = 255;

void drive(int motor,int speed1,int speed2) {
  driver.setup_motor(motor,speed1,speed2);
  delay(time_delay);
}

void setup()
{
}

void loop()
{
  drive(MOTOR::MOTOR_A,speed,0);
  driver.full_stop(10);
  drive(MOTOR::MOTOR_A,0,speed);
  driver.full_stop(10);
  drive(MOTOR::MOTOR_B,speed,0);
  driver.full_stop(10);
  drive(MOTOR::MOTOR_B,0,speed);
  driver.full_stop(10);
  drive(MOTOR::MOTOR_A,0,speed);
  drive(MOTOR::MOTOR_B,0,speed);
  driver.full_stop(10);
  drive(MOTOR::MOTOR_A,speed,0);
  drive(MOTOR::MOTOR_B,speed,0);
  driver.full_stop(10);
}