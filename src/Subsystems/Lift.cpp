#include "Lift.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

Lift::Lift() :
		PIDSubsystem("Lift", 1.0, 0.0, 0.0)
{
	GetPIDController()->SetContinuous(false);

	encoderLift = RobotMap::robotEncoderLift;
	talonLift = RobotMap::robotTalonLift;
SetSetpoint(POSITION);
Enable();

}

double Lift::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;	

return encoderLift->PIDGet();
}

void Lift::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
talonLift->PIDWrite(output);
}

void Lift::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
void Lift::GetEncoder(){

}
