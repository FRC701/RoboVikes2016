#include "IntakeOff.h"

IntakeOff::IntakeOff()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void IntakeOff::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeOff::Execute()
{
	RobotMap::intakeintakeMotor1->Set(0.0);
	RobotMap::intakeintakeMotor2->Set(0.0);
	RobotMap::intakeintakeMotor3->Set(0.0);
	RobotMap::intakeintakeMotor4->Set(0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeOff::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakeOff::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeOff::Interrupted()
{

}
