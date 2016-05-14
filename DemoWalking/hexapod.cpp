#include "hexapod.h"

void Hexapod::set_leg_first_left(int p_coxa, int p_femur, int p_tibia)
{
    p_coxa_first_left = 2;
    p_femur_first_left = 3;
    p_tibia_first_left = 4;
}

void Hexapod::set_leg_second_left(int p_coxa, int p_femur, int p_tibia)
{
    p_coxa_second_left = p_coxa;
    p_femur_second_left = p_femur;
    p_tibia_second_left = p_tibia;
}

void Hexapod::set_leg_third_left(int p_coxa, int p_femur, int p_tibia)
{
    p_coxa_third_left = p_coxa;
    p_femur_third_left = p_femur;
    p_tibia_third_left = p_tibia;
}

void Hexapod::set_leg_first_right(int p_coxa, int p_femur, int p_tibia)
{
    p_coxa_first_right = p_coxa;
    p_femur_first_right = p_femur;
    p_tibia_first_right = p_tibia;
}

void Hexapod::set_leg_second_right(int p_coxa, int p_femur, int p_tibia)
{
    p_coxa_second_right = p_coxa;
    p_femur_second_right = p_femur;
    p_tibia_second_right = p_tibia;
}

void Hexapod::set_leg_third_right(int p_coxa, int p_femur, int p_tibia)
{
    p_coxa_third_right = p_coxa;
    p_femur_third_right = p_femur;
    p_tibia_third_right = p_tibia;
}

void Hexapod::Init()
{
  this->leg_first_left = new Leg(p_coxa_first_left, p_femur_first_left, p_tibia_first_left);
  this->leg_second_left = new Leg(p_coxa_second_left, p_femur_second_left, p_tibia_second_left);
  this->leg_third_left = new Leg(p_coxa_third_left, p_femur_third_left, p_tibia_third_left);
  this->leg_first_right = new Leg(p_coxa_first_right, p_femur_first_right, p_tibia_first_right);
  this->leg_second_right = new Leg(p_coxa_second_right, p_femur_second_right, p_tibia_second_right);
  this->leg_third_right = new Leg(p_coxa_third_right, p_femur_third_right, p_tibia_third_right);
}

void Hexapod::Walk()
{
  leg_first_left->Move();
  delay(100);
  leg_first_left->set_coxa_angle(10);
  leg_first_left->Move();
  delay(100);
}
