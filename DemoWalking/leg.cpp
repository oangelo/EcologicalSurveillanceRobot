#include "leg.h"
#include <math.h>

Leg::Leg(int p_shoulder, int p_middle, int p_bottom):m_shoulder(),m_middle(),m_bottom(){
	m_shoulder.attach(p_shoulder);
	m_middle.attach(p_middle);
	m_bottom.attach(p_bottom);
}

void Leg::set_spd(float speed){
	this->speed = speed;
}

void Leg::set_height(float height){
	this->height = height;
}

void Leg::set_length(float angle){
	this->length = angle;
}

void Leg::Step(){
    delay(speed);
	m_middle.write(height);
	delay(speed);
	m_shoulder.write(length);
	delay(speed);
	m_middle.write(10);
	delay(speed);
	m_shoulder.write(10);
	delay(speed);
}
