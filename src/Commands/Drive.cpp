#include "Drive.h"


Drive::Drive(){
	Drive::encoderValueGoal = 0;
	Drive::encoderValue = 0;
	Drive::direction = 1;
	Drive::speed = 0;
}

Drive::Drive(int encoder, int goal, double speedinput)
{
	speed = 1.0;
	encoderValue = encoder;
	encoderValueGoal = goal;
	speed= speedinput;
	direction = 1;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void Drive::Initialize()
{
	if (encoderValueGoal-encoderValue < encoderValue)
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
	return encoderValue >= encoderValueGoal;
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
