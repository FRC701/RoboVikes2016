#include "Drive.h"



Drive::Drive(int goal)
{
	speed = 1.0;
	direction = 1;
	enGoal = goal;
	encoderValueGoal = RobotMap::chassisleftMotor1->GetEncPosition() + enGoal;
}

Drive::Drive(int goal, double speedinput)
{
	enGoal = goal;
	speed= speedinput;
	direction = 1;
	encoderValueGoal = RobotMap::chassisleftMotor1->GetEncPosition() + enGoal;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void Drive::Initialize()
{
	if (encoderValueGoal-RobotMap::chassisleftMotor1->GetEncPosition() < RobotMap::chassisleftMotor1->GetEncPosition())
		direction = -1;


}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute()
{
	RobotMap::chassisleftMotor1->Set(direction*speed);
	RobotMap::chassisleftMotor2->Set(direction*speed);
	RobotMap::chassisleftMotor3->Set(direction*speed);
	RobotMap::chassisrightMotor1->Set(direction*speed);
	RobotMap::chassisrightMotor2->Set(direction*speed);
	RobotMap::chassisrightMotor3->Set(direction*speed);

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
