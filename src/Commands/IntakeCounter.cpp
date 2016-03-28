#include "IntakeCounter.h"

IntakeCounter::IntakeCounter(int endcounter)
: mcounter(0)
{
	mendcounter = endcounter;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void IntakeCounter::Initialize()
{
	mcounter = 0;

}

// Called repeatedly when this Command is scheduled to run
void IntakeCounter::Execute()
{
	mcounter++;

}

// Make this return true when this Command no longer needs to run execute()
bool IntakeCounter::IsFinished()
{
	return mcounter == mendcounter;
}

// Called once after isFinished returns true
void IntakeCounter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeCounter::Interrupted()
{

}
