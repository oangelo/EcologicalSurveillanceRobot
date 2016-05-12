#include "hexapod.h"

void Hexapod::set_leg_first_left(int coxa, int femur, int tibia)
{
    coxa_first_left = coxa;
    femur_first_left = femur;
    tibia_first_left = tibia;
}

void Hexapod::set_leg_second_left(int coxa, int femur, int tibia)
{
    coxa_second_left = coxa;
    femur_second_left = femur;
    tibia_second_left = tibia;
}

void Hexapod::set_leg_third_left(int coxa, int femur, int tibia)
{
    coxa_third_left = coxa;
    femur_third_left = femur;
    tibia_third_left = tibia;
}

void Hexapod::set_leg_first_right(int coxa, int femur, int tibia)
{
    coxa_first_right = coxa;
    femur_first_right = femur;
    tibia_first_right = tibia;
}

void Hexapod::set_leg_second_right(int coxa, int femur, int tibia)
{
    coxa_second_right = coxa;
    femur_second_right = femur;
    tibia_second_right = tibia;
}

void Hexapod::set_leg_third_right(int coxa, int femur, int tibia)
{
    coxa_third_right = coxa;
    femur_third_right = femur;
    tibia_third_right = tibia;
}

void Hexapod::Init()
{
  leg_first_left = new Leg(coxa_first_left, femur_first_left, tibia_first_left);
  leg_second_left = new Leg(coxa_second_left, femur_second_left, tibia_second_left);
  leg_third_left = new Leg(coxa_third_left, femur_third_left, tibia_third_left);
  leg_first_right = new Leg(coxa_first_right, femur_first_right, tibia_first_right);
  leg_second_right = new Leg(coxa_second_right, femur_second_right, tibia_second_right);
  leg_third_right = new Leg(coxa_third_right, femur_third_right, tibia_third_right);
}
