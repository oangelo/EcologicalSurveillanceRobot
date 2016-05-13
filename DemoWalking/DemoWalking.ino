#include "leg.h"

Leg* leg;

void setup()
{
    Serial.begin(9600);
    leg = new Leg(2,3,4);
    //leg->set_spd(100);
    //leg->set_height(2);
    //leg->set_length(2.5);
    //leg->set_coxa_angle(70);
}

void loop()
{

}
