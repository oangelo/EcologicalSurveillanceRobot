# Ecological Surveillance Robot (ESR)

The objective of this project is to build a robot for environmental monitoring.
Since the robot will need to move on different kind of terrains, a hexapod seems
to be the most appropriate format for the robot structure. The project will be
developed using cheap hardware and sensors, because we have a limited budget. An
[arduino](https://www.arduino.cc/) board will control the system and small servo motors will be used to
drive the legs. The mechanical structure will be made of polyethylene, that is
light, cheap but strong enough.
While there are already many hexapod projects available in the internet, our
main goal is to develop a low power consumption one. While many projects use
[Raspberry Pi](https://www.raspberrypi.org/) and even a whole router, we will focus in using low power
consumption devices.


# BOM (Bill of Materials):
* Arduino
* Servo Motors (18 pcs)
* GPS (GY-NEO6MV2)
* (Sensors ...)

# Functionalities

List of functionalities the robot will have

## Trip plan

The robot must gather interesting data about the environment, to do that, it
must walk around the region of interest. To be able to follow a predefined path,
the robot must have access to a gps in order to be able to locate himself in
space. Through a user interface, the path of the robot can be set by the user on
a map.

# References 

https://github.com/antdroid-hexapod/antdroid/wiki/Assembly-guide#vitamins


# Disclaimer

This project is been developed in [Polytechnic Institute of Rio de Janeiro](http://www.iprj.uerj.br/). It
started as the a final project of a student [Luccas Beck Reis](https://github.com/LuccasBeckReis), requirement for
the degree in Computer Engineering. Collaborators and suggestions are all
wellcome.

# Team: 

* [Luccas Beck Reis](https://github.com/LuccasBeckReis) - Student
* [Angelo Mondaini Calvão](https://github.com/oangelo) - Advisor
