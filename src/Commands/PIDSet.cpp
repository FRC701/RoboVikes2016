#include <Commands/PIDSet.h>
#include <Timer.h>

PIDSet::PIDSet(){
	m_setPoint = RobotMap::chassisrightMotor2->GetEncPosition();
	m_delay = 0.0;

	Requires(Robot::chassis.get());
}

PIDSet::PIDSet(double setPoint)
{
	m_setPoint = setPoint;
	m_delay = 0.5;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());
}

PIDSet::PIDSet(double setPoint, double delay)
{
	m_setPoint = setPoint;
	m_delay = delay;

	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void PIDSet::Initialize()
{
	timer.Start();
	Robot::piddrive->SetSetpoint(m_setPoint);
	SmartDashboard::PutNumber("SetPoint", m_setPoint);		//Debugging

}

// Called repeatedly when this Command is scheduled to run
void PIDSet::Execute()
{

	Robot::piddrive->Enable();
}

// Make this return true when this Command no longer needs to run execute()
bool PIDSet::IsFinished()
{
	/*
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
*/
	return Robot::piddrive->OnTarget() && timer.HasPeriodPassed(m_delay);

}



// Called once after isFinished returns true
void PIDSet::End()
{
	timer.Stop();
	timer.Reset();
	Robot::piddrive->Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDSet::Interrupted()
{
	timer.Stop();
	timer.Reset();
	Robot::piddrive->Disable();
}
