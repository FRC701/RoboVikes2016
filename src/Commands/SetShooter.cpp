#include "SetShooter.h"

SetShooter::SetShooter(char set)
{
	mset = set;
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
	if (mset == 'f')
		RobotMap::shooterliftShooter->Set(RobotMap::shooterliftShooter->kForward);
	else if (mset == 'r')
		RobotMap::shooterliftShooter->Set(RobotMap::shooterliftShooter->kReverse);


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
