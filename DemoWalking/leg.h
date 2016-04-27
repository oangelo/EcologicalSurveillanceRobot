#ifndef LEG_H
#define LEG_H 

#include "servo.h"

class Leg(){
    public:
        Leg(int p_shoulder, int p_middle, int p_bottom);
        set_spd(float speed);
        set_height(float height);
        set_length(float angle);
        Step();
    private:
        float height, angle, speed; 
	Servo m_shoulder, m_middle, m_bottom;
}

#endif /* LEG_H */
