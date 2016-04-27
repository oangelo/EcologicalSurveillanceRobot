#include "leg.h"
#include <math.h>

Leg::Leg(int p_shoulder, int p_middle, int p_bottom){
	m_shoulder.attach(p_shoulder);
	m_middle.attach(p_middle);
	m_bottom.attach(p_bottom);
}

Leg::set_spd(float speed){
	this->speed = speed;	
}

Leg::set_height(float height){
	this->height = height;
}

Leg::set_length(float length){
	this->length = length;
}

Leg::Step(){
	m_middle.write(acos(height/7.6));
	delay(speed);
	m_shoulder.write(length);
	delay(speed);
	m_middle.write(acos(height/7.6));
	delay(speed);
	m_shoulder.write(speed);
	delay(speed);
}
