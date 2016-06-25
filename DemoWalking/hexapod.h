#ifndef HEXAPOD_H
#define HEXAPOD_H

#include "leg.h"
#include <Arduino.h>

class Hexapod{
  public:
      //Hexapod(); - uncommenting this line an error is shown
      void Init();
      void Walk();
  private:
      Leg *leg_first_left, *leg_first_right, *leg_second_left, *leg_second_right, *leg_third_left, *leg_third_right;
      int p_coxa_first_left, p_femur_first_left, p_tibia_first_left,
          p_coxa_second_left, p_femur_second_left, p_tibia_second_left,
          p_coxa_third_left, p_femur_third_left, p_tibia_third_left,
          p_coxa_first_right, p_femur_first_right, p_tibia_first_right,
          p_coxa_second_right, p_femur_second_right, p_tibia_second_right,
          p_coxa_third_right, p_femur_third_right, p_tibia_third_right;
      void set_leg_first_left(int p_coxa, int p_femur, int p_tibia);
      void set_leg_second_left(int p_coxa, int p_femur, int p_tibia);
      void set_leg_third_left(int p_coxa, int p_femur, int p_tibia);
      void set_leg_first_right(int p_coxa, int p_femur, int p_tibia);
      void set_leg_second_right(int p_coxa, int p_femur, int p_tibia);
      void set_leg_third_right(int p_coxa, int p_femur, int p_tibia);
};

#endif
