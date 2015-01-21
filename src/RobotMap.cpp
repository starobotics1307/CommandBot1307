// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainFRONT_RIGHT_TAL = NULL;
SpeedController* RobotMap::driveTrainFRONT_LEFT_TAL = NULL;
SpeedController* RobotMap::driveTrainREAR_LEFT_TAL = NULL;
SpeedController* RobotMap::driveTrainREAR_RIGHT_TAL = NULL;
RobotDrive* RobotMap::driveTrainRoboDrive = NULL;
SpeedController* RobotMap::robotTalonLift = NULL;
Encoder* RobotMap::robotEncoderLift= NULL;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainFRONT_RIGHT_TAL = new Talon(2);
	lw->AddActuator("DriveTrain", "FRONT_RIGHT_TAL", (Talon*) driveTrainFRONT_RIGHT_TAL);
	
	driveTrainFRONT_LEFT_TAL = new Talon(0);
	lw->AddActuator("DriveTrain", "FRONT_LEFT_TAL", (Talon*) driveTrainFRONT_LEFT_TAL);
	
	driveTrainREAR_LEFT_TAL = new Talon(1);
	lw->AddActuator("DriveTrain", "REAR_LEFT_TAL", (Talon*) driveTrainREAR_LEFT_TAL);
	
	driveTrainREAR_RIGHT_TAL = new Talon(3);
	lw->AddActuator("DriveTrain", "REAR_RIGHT_TAL", (Talon*) driveTrainREAR_RIGHT_TAL);
	
	driveTrainRoboDrive = new RobotDrive(driveTrainFRONT_LEFT_TAL, driveTrainREAR_LEFT_TAL,
              driveTrainFRONT_RIGHT_TAL, driveTrainREAR_RIGHT_TAL);



	robotTalonLift = new Talon(4);
	robotEncoderLift = new Encoder(5, 6);

	driveTrainRoboDrive->SetSafetyEnabled(false);
        driveTrainRoboDrive->SetExpiration(0.0);
        driveTrainRoboDrive->SetSensitivity(1.0);
        driveTrainRoboDrive->SetMaxOutput(0.59);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
