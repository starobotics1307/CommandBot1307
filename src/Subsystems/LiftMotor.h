#ifndef LiftMotor_H
#define LiftMotor_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class LiftMotor: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	SpeedController* lift_Jag;



public:
	LiftMotor();
	void InitDefaultCommand();
	void powerLift();
};

#endif
