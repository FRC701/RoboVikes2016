#include "LiftShooterToggle.h"

LiftShooterToggle::LiftShooterToggle(): Command()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void LiftShooterToggle::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LiftShooterToggle::Execute()
{
	if(RobotMap::shooterliftShooter->Get() == DoubleSolenoid::kForward)
	{
		RobotMap::shooterliftShooter->Set(DoubleSolenoid::kReverse);
	}
	//Low Speed Transmission
	else if(RobotMap::shooterliftShooter->Get() == DoubleSolenoid::kReverse)
	{
		RobotMap::shooterliftShooter->Set(DoubleSolenoid::kForward);
	}

}

// Make this return true when this Command no longer needs to run execute()
bool LiftShooterToggle::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void LiftShooterToggle::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftShooterToggle::Interrupted()
{

}
