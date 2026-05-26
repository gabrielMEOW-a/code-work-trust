#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::adi::DigitalOut claw('D');
inline pros::adi::DigitalOut clawRotate('E');
inline pros::adi::DigitalOut clawTip('G');

inline pros::Motor dr4bl(15);
inline pros::Motor dr4br(-16);

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');