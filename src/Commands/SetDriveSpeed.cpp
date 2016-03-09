#include "SetDriveSpeed.h"

SetDriveSpeed::SetDriveSpeed(double value , double newValue)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);

	mValue = value;
	mNewValue = newValue;
}

// Called just before this Command runs the first time
void SetDriveSpeed::Initialize()
{
//int counter = 0;
}
// Called repeatedly when this Command is scheduled to run
void SetDriveSpeed::Execute()
{
	/*if (counter << 10)
	{
	RobotMap::chassisleftMotor1->Set(mValue);
	RobotMap::chassisrightMotor1->Set(mValue);
	}

	else
	{
	RobotMap::chassisleftMotor1->Set(mNewValue);
	RobotMap::chassisrightMotor1->Set(mNewValue);
	}
	counter = 0;*/
}

// Make this return true when this Command no longer needs to run execute()
bool SetDriveSpeed::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void SetDriveSpeed::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetDriveSpeed::Interrupted()
{

}
