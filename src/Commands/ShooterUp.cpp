#include "ShooterUp.h"

ShooterUp::ShooterUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::shooter.get());
}

// Called just before this Command runs the first time
void ShooterUp::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ShooterUp::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ShooterUp::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ShooterUp::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterUp::Interrupted()
{

}
