#include "RobotTurn.h"
#include <iostream>
#include "Timer.h"
RobotTurn::RobotTurn(double time, double speed){
m_time = time;
m_speed = speed;

}


// Called just before this Command runs the first time
void RobotTurn::Initialize()
{
	RobotMap::chassisleftMotor1->Set(0);
	RobotMap::chassisleftMotor2->Set(0);
	RobotMap::chassisleftMotor3->Set(0);
	RobotMap::chassisrightMotor1->Set(0);
	RobotMap::chassisrightMotor2->Set(0);
	RobotMap::chassisrightMotor3->Set(0);
	timer.start();
}

// Called repeatedly when this Command is scheduled to run
void RobotTurn::Execute()
{
	RobotMap::chassisleftMotor1->Set(m_speed);
		RobotMap::chassisleftMotor2->Set(m_speed);
		RobotMap::chassisleftMotor3->Set(m_speed);
		RobotMap::chassisrightMotor1->Set(-m_speed);
		RobotMap::chassisrightMotor2->Set(-m_speed);
		RobotMap::chassisrightMotor3->Set(-m_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool RobotTurn::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void RobotTurn::End()
{
		RobotMap::chassisleftMotor1->Set(0);
		RobotMap::chassisleftMotor2->Set(0);
		RobotMap::chassisleftMotor3->Set(0);
		RobotMap::chassisrightMotor1->Set(0);
		RobotMap::chassisrightMotor2->Set(0);
		RobotMap::chassisrightMotor3->Set(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RobotTurn::Interrupted()
{
		RobotMap::chassisleftMotor1->Set(0);
		RobotMap::chassisleftMotor2->Set(0);
		RobotMap::chassisleftMotor3->Set(0);
		RobotMap::chassisrightMotor1->Set(0);
		RobotMap::chassisrightMotor2->Set(0);
		RobotMap::chassisrightMotor3->Set(0);
}
