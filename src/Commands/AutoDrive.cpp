#include "AutoDrive.h"

AutoDrive::AutoDrive(double distance)
{
	mdistance = distance;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void AutoDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute()
{
	RobotMap::chassisleftMotor1->Set(1.0);
	RobotMap::chassisleftMotor2->Set(1.0);
	RobotMap::chassisleftMotor3->Set(1.0);

	//Right Side
	RobotMap::chassisrightMotor1->Set(1.0);
	RobotMap::chassisrightMotor2->Set(1.0);
	RobotMap::chassisrightMotor3->Set(1.0);

}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive::IsFinished()
{
	if (RobotMap::chassisleftMotor1->GetPosition() == mdistance)
		return true;
	else
		return false;
}

// Called once after isFinished returns true
void AutoDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted()
{

}
