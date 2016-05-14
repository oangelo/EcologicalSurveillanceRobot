#include "leg.h"
#include <math.h>

Leg::Leg(int p_coxa, int p_femur, int p_tibia):
height(2), length(2), speed(200), coxa_angle(90), coxa(), femur(), tibia()
{
	coxa.attach(p_coxa);
	femur.attach(p_femur);
	tibia.attach(p_tibia);

  set_angles(this->height, this->length);

	Move();
}

void Leg::set_spd(float speed)
{
	this->speed = speed;
}

void Leg::set_height(float height)
{
	this->height = height;
	set_angles(this->length, this->height);
}

void Leg::set_angles(float length, float height)
{
	//Both l1 and l2 are the leg's length//
	float theta1, theta2, l1=2, l2=2, x = length, y = height;

	theta1 = M_PI/2 +(sqrt(pow(l2,2.0) - pow(x,2.0) +2*x*l1-pow(l1,2.0)) - y) / l1;
	theta2 = asin((x - l1)/l2);

	this->femur_angle = 180*theta1/M_PI;
	this->tibia_angle = 180*theta2/M_PI;
}

void Leg::set_coxa_angle(float coxa_angle)
{
	this->coxa_angle = coxa_angle;
}

void Leg::set_length(float length)
{
	this->length = length;
	set_angles(this->length, this->height);
}

void Leg::Move()
{
  femur.write(int(femur_angle));
	tibia.write(int(tibia_angle));
	coxa.write(int(coxa_angle));
}
