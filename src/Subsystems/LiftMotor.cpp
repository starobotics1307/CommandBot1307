#include "LiftMotor.h"
#include "../RobotMap.h"

LiftMotor::LiftMotor() :
		Subsystem("LiftMotor")
{
lift_Jag = RobotMap::robotTalonLift;
}

void LiftMotor::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void LiftMotor::powerLift(){

}
