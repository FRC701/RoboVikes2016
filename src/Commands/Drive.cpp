#include "Drive.h"

Drive::Drive(int goal, double mspeed): Command()
{
	speed = mspeed;
	encoderValueGoal = RobotMap::chassisleftMotor1->GetEncPosition() + goal;
}

// Called just before this Command runs the first time
void Drive::Initialize()
{


}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute()
{
	RobotMap::chassisleftMotor1->Set(speed);
	RobotMap::chassisleftMotor2->Set(speed);
	RobotMap::chassisleftMotor3->Set(speed);
	RobotMap::chassisrightMotor1->Set(-speed);
	RobotMap::chassisrightMotor2->Set(-speed);
	RobotMap::chassisrightMotor3->Set(-speed);

}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished()
{
	return RobotMap::chassisleftMotor1->GetEncPosition() >= encoderValueGoal;
}

// Called once after isFinished returns true
void Drive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted()
{

}
