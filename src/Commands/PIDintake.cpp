#include "PIDintake.h"
#include "../Subsystems/PIDIntake.h"

PIDintake::PIDintake()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);


}

// Called just before this Command runs the first time
void PIDintake::Initialize()
{

	//pidIntake->SetSetpoint(0);

}

// Called repeatedly when this Command is scheduled to run
void PIDintake::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool PIDintake::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PIDintake::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDintake::Interrupted()
{

}
