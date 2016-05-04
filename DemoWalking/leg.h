#ifndef LEG_H
#define LEG_H

#include <Servo.h>
#include <Arduino.h>

class Leg{
    public:
        Leg(int p_shoulder, int p_middle, int p_bottom);
        void set_spd(float speed);
        void set_height(float height);
        void set_length(float angle);
        void Step();
        void Init();
    private:
        float height, angle, speed, length;
        Servo m_shoulder, m_middle, m_bottom;
};

#endif /* LEG_H */
