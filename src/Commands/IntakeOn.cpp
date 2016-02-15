// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "IntakeOn.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

IntakeOn::IntakeOn(double speed_): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
	speed = speed_;
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::intake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void IntakeOn::Initialize() {
	//printf("IntakeOn:Initialize()\n");
}

// Called repeatedly when this Command is scheduled to run
void IntakeOn::Execute() {
	RobotMap::intakeintakeMotor1->Set(-speed);
	RobotMap::intakeintakeMotor2->Set(speed);

	//static int counter = 0;
	//std::cout << "IntakeOn::Execute: " << counter++ << std::endl;
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeOn::IsFinished() {
	//static int counter = 0;
	//std::cout << "IntakeOn::IsFinised: " << counter++;
	//SmartDashboard::PutNumber("", RobotMap::shooterrollerMotor->IsFwdLimitSwitchClosed());

	return !RobotMap::shooterrollerMotor->IsFwdLimitSwitchClosed();
    //return !RobotMap::shooterrollerMotor->GetForwardLimitOK();
}

// Called once after isFinished returns true
void IntakeOn::End() {
	//static int counter = 0;
	//std::cout << "IntakeOn::End:" << counter++ << std::endl;
	//RobotMap::intakeintakeMotor1->Set(0.0);
	//RobotMap::intakeintakeMotor2->Set(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeOn::Interrupted() {
	//RobotMap::intakeintakeMotor1->Set(0.0);
	//RobotMap::intakeintakeMotor2->Set(0.0);
}
