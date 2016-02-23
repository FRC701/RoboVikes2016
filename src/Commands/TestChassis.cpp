#include "TestChassis.h"

TestChassis::TestChassis()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void TestChassis::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TestChassis::Execute()
{
	RobotMap::chassisleftMotor1->Set(1.0);
	RobotMap::chassisrightMotor1->Set(1.0);

}

// Make this return true when this Command no longer needs to run execute()
bool TestChassis::IsFinished()
{
	return RobotMap::chassisleftMotor1->GetSpeed() > 0 || RobotMap::chassisrightMotor1->GetSpeed() < 0;
}

// Called once after isFinished returns true
void TestChassis::End()
{
	RobotMap::chassisleftMotor1->Set(0.0);
	RobotMap::chassisrightMotor1->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestChassis::Interrupted()
{

}
