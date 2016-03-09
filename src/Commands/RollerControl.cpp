#include "RollerControl.h"

RollerControl::RollerControl()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::shooter.get());
}

// Called just before this Command runs the first time
void RollerControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void RollerControl::Execute()
{
	RobotMap::shooterrollerMotor->Set(1.0);

}

// Make this return true when this Command no longer needs to run execute()
bool RollerControl::IsFinished()
{
	return !RobotMap::shooterrollerMotor->IsFwdLimitSwitchClosed();
}

// Called once after isFinished returns true
void RollerControl::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollerControl::Interrupted()
{

}
