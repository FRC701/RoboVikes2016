#include <Commands/PIDSet.h>

PIDSet::PIDSet(double Set)
{
	setPoint = Set;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void PIDSet::Initialize()
{

	Robot::piddrive->SetSetpoint(setPoint);
}

// Called repeatedly when this Command is scheduled to run
void PIDSet::Execute()
{
 Robot::piddrive->Enable();
}

// Make this return true when this Command no longer needs to run execute()
bool PIDSet::IsFinished()
{
	return Robot::piddrive->OnTarget();;
}

// Called once after isFinished returns true
void PIDSet::End()
{
Robot::piddrive->Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDSet::Interrupted()
{
Robot::piddrive->Disable();
}
