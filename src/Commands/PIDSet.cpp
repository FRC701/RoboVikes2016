#include <Commands/PIDSet.h>
#include <Timer.h>

PIDSet::PIDSet(double Set, double tolerance, double delay)
{
setPoint = Set;
mtolerance = tolerance;
mdelay = delay;
}

PIDSet::PIDSet(double Set, double tolerance)
{
	setPoint = Set;
	mtolerance = tolerance;
	mdelay = 1;

}
PIDSet::PIDSet(double Set)
{
	setPoint = Set;
	mtolerance = 50;
	mdelay = 1;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void PIDSet::Initialize()
{
	timer.Start();
	Robot::piddrive->SetSetpoint(setPoint);
	Robot::piddrive->SetAbsoluteTolerance(mtolerance);
}

// Called repeatedly when this Command is scheduled to run
void PIDSet::Execute()
{

	Robot::piddrive->Enable();
}

// Make this return true when this Command no longer needs to run execute()
bool PIDSet::IsFinished()
{
	if(Robot::piddrive->OnTarget() == true)
	{
		if(timer.HasPeriodPassed(mdelay))
		{
			return true;
			}
	}
		else{
			timer.Reset();
			return false;
		}

	return false;

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
