#include "hexapod.h"

Hexapod robot;

void setup()
{
    robot.Init();
}

void loop()
{
   robot.Walk();
}
