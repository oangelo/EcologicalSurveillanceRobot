#ifndef HEXAPOD_H
#define HEXAPOD_H

#include "leg.h"
#include <Arduino.h>

class Hexapod{
  public:
      Hexapod();
      void set_leg_first_left(int coxa, int femur, int tibia);
      void set_leg_second_left(int coxa, int femur, int tibia);
      void set_leg_third_left(int coxa, int femur, int tibia);
      void set_leg_first_right()int coxa, int femur, int tibia;
      void set_leg_second_right(int coxa, int femur, int tibia);
      void set_leg_third_right(int coxa, int femur, int tibia);
      void Init();
  private:
      Leg* leg_first_left, leg_first_right, leg_second_left, leg_second_right, leg_third_left, leg_third_right;
};

#endif
