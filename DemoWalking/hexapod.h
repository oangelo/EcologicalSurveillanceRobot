#ifndef HEXAPOD_H
#define HEXAPOD_H

#include "leg.h"
#include <Arduino.h>

class Hexapod{
  public:
      Hexapod(Leg first_left, Leg second_left, Leg third_left, Leg first_right, Leg second_right, Leg third_right);
      void Init();
  private:
      Leg[6];
};

#endif
