#include "KickstandToggle.h"
#include "../Subsystems/Chassis.h"

KickstandToggle::KickstandToggle()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void KickstandToggle::Initialize()
{

}
// Called repeatedly when this Command is scheduled to run
void KickstandToggle::Execute()
{

	if(RobotMap::chassiskickstand->Get() == DoubleSolenoid::kForward)
		RobotMap::chassiskickstand->Set(DoubleSolenoid::kReverse);

	else
		RobotMap::chassiskickstand->Set(DoubleSolenoid::kForward);

}

// Make this return true when this Command no longer needs to run execute()
bool KickstandToggle::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void KickstandToggle::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void KickstandToggle::Interrupted()
{

}
