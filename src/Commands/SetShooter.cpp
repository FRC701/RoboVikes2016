#include "SetShooter.h"

SetShooter::SetShooter(DoubleSolenoid::Value value)
{
	mValue = value;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void SetShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SetShooter::Execute()
{
	RobotMap::shooterliftShooter->Set(mValue);
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooter::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooter::Interrupted()
{

}
