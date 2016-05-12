#include "hexapod.h"

Hexapod::Hexapod(Leg first_left, Leg second_left, Leg third_left, Leg first_right, Leg second_right, Leg third_right)
{
  this->first_left = first_left;
  this->first_right = first_right;
  this->second_left = second_left;
  this->second_right = second_right;
  this->third_left = third_left;
  this->third_right = third_right;
}

void Hexapod::Init()
{
  
}
