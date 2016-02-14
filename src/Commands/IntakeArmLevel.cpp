#include "IntakeArmLevel.h"

IntakeArmLevel::IntakeArmLevel()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void IntakeArmLevel::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void IntakeArmLevel::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool IntakeArmLevel::IsFinished()
{
	return true; //TODO This is set to true it needs to be changed.
}

// Called once after isFinished returns true
void IntakeArmLevel::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeArmLevel::Interrupted()
{

}
