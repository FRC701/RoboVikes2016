#include "PIDArmSet.h"

PIDArmSet::PIDArmSet(double setpoint)
{
m_setpoint = setpoint;	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}
PIDArmSet::PIDArmSet()
{
	m_setpoint = 0;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void PIDArmSet::Initialize()
{
	Robot::pidarm->SetSetpoint(m_setpoint);
	Robot::pidarm->Enable();
	Robot::pidarml->SetSetpoint(m_setpoint);
	Robot::pidarml->Enable();
}

// Called repeatedly when this Command is scheduled to run
void PIDArmSet::Execute()
{
int correction = RobotMap::intakeintakeMotor3->GetEncPosition() - RobotMap::intakeintakeMotor4->GetEncPosition();

SmartDashboard::PutNumber("PIDArm Correction" ,
		RobotMap::intakeintakeMotor3->GetEncPosition() - RobotMap::intakeintakeMotor4->GetEncPosition());

}

// Make this return true when this Command no longer needs to run execute()
bool PIDArmSet::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PIDArmSet::End()
{
Robot::pidarm->Disable();
Robot::pidarml->Disable();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PIDArmSet::Interrupted()
{
Robot::pidarm->Disable();
Robot::pidarml->Disable();

}
