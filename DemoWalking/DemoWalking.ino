#include "leg.h" 

Leg* leg;

void setup(){
    leg = new Leg(2,3,4);
    leg->set_spd(100);
    leg->set_height(170);
    leg->set_length(170);
}

void loop(){
    leg->Step();
}
