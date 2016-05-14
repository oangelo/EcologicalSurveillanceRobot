#ifndef LEG_H
#define LEG_H

#include <Servo.h>
#include <Arduino.h>

class Leg{
    public:
        Leg(int p_coxa, int p_femur, int p_tibia);
        void set_spd(float speed);
        void set_height(float height);
        void set_length(float length);
        void set_coxa_angle(float coxa_angle);
        void Move();
        void Init();
    private:
        void set_angles(float length, float height);
        float height, length, speed,
              femur_angle, tibia_angle, coxa_angle;
        Servo coxa, femur, tibia;
};

#endif /* LEG_H */
