#include "PrepShooter.h"

PrepShooter::PrepShooter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void PrepShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PrepShooter::Execute()
{
	RobotMap::shooterlift1->Set(DoubleSolenoid::kForward);
	RobotMap::shooterlift2->Set(DoubleSolenoid::kForward);


}

// Make this return true when this Command no longer needs to run execute()
bool PrepShooter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PrepShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PrepShooter::Interrupted()
{

}