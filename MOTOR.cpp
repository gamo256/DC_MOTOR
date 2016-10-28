#include "Arduino.h"
#include "MOTOR.h"

struct Motor {
  int in1;
  int in2;
};

Motor motors[2];

MOTOR::MOTOR(int in1, int in2, int in3, int in4) {
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);

  motors[0].in1 = in1;
  motors[0].in2 = in2;

  motors[1].in1 = in3;
  motors[1].in2 = in4;
}

void MOTOR::drive_motors(int speed) {
  this->drive_motor(this->MOTOR_A,speed);
  this->drive_motor(this->MOTOR_B,speed);
}


void MOTOR::forward(int speed, int delay_time) {
  this->setup_motors(speed,0,speed,0);
  delay(delay_time);
}

void MOTOR::turn_right(int speed, int delay_time) {
  this->setup_motors(0,speed,speed,0);
  delay(delay_time);
}

void MOTOR::turn_left(int speed, int delay_time) {
  this->setup_motors(speed,0,0,speed);
  delay(delay_time);
}

void MOTOR::backward(int speed, int delay_time) {
  this->setup_motors(0,speed,0,speed);
  delay(delay_time);
}

void MOTOR::full_stop(int delay_time) {
  this->setup_motors(0,0,0,0);
  delay(delay_time);
}

void MOTOR::brake(int delay_time) {
  this->setup_motors(255,255,255,255);
  delay(delay_time);
}

void MOTOR::setup_motors(int speed1, int speed2, int speed3, int speed4) {
  MOTOR::setup_motor(this->MOTOR_A,speed1,speed2);
  MOTOR::setup_motor(this->MOTOR_B,speed3,speed4);
}

void MOTOR::setup_motor(int motor_index, int speed1, int speed2) {
  analogWrite(motors[motor_index].in1, speed1);
  analogWrite(motors[motor_index].in2, speed2);
}
