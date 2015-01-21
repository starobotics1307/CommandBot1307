#ifndef Lift_H
#define Lift_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class Lift: public PIDSubsystem
{
public:
double POSITION = 0.0;
Encoder* encoderLift;
SpeedController* talonLift;

	Lift();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void GetEncoder();
};

#endif
