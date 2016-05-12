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
      int coxa_first_left, femur_first_left, tibia_first_left,
          coxa_second_left, femur_second_left, tibia_second_left,
          coxa_third_left, femur_third_left, tibia_third_left,
          coxa_first_right, femur_first_right, tibia_first_right,
          coxa_second_right, femur_second_right, tibia_second_right,
          coxa_third_right, femur_third_right, tibia_third_right;
};

#endif
