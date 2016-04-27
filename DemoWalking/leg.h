#ifndef LEG_H
#define LEG_H 

class Leg(){
    public:
        Leg(int motor1, int motor2, int motor3);
        set_vel(float velocity);
        step_height(float height);
        step_length(float angle);
        Step();
    private:
        int motor1, motor2, motor3;
        float height, angle; 
}

#endif /* LEG_H */
