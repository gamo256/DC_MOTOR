#ifndef MOTOR_h
#define MOTOR_h

#include "Arduino.h"

class MOTOR
{
  public:
    static const int MOTOR_A = 0;
    static const int MOTOR_B = 1;
    MOTOR(int in1, int in2, int in3, int in4);
    void drive_motors(int speed);
    void drive_motor(int motor_index, int speed);
    void setup_motors(int speed1, int speed2, int speed3, int speed4);
    void setup_motor(int motor_index, int speed1, int speed2);
    void forward(int speed, int delay_time);
    void full_stop(int delay_time);
    void brake(int delay_time);
    void turn_right(int speed, int delay_time);
    void turn_left(int speed, int delay_time);
    void backward(int speed, int delay_time);
  private:
    struct Motor;
    int _in1;
    int _in2;
    int _in3;
    int _in4;
};

#endif
