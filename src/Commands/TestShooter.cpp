#include "TestShooter.h"

TestShooter::TestShooter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::shooter.get());
}

// Called just before this Command runs the first time
void TestShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TestShooter::Execute()
{
	RobotMap::shootershooterMotor1->Set(6000);
	RobotMap::shootershooterMotor2->Set(6000);
	RobotMap::shooterrollerMotor->Set(1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool TestShooter::IsFinished()
{
	return RobotMap::shootershooterMotor1->GetSpeed() > 0 && RobotMap::shootershooterMotor2->GetSpeed() < 0 && RobotMap::shooterrollerMotor->GetOutputCurrent() > 0;
}

// Called once after isFinished returns true
void TestShooter::End()
{
	RobotMap::shootershooterMotor1->Set(0.0);
	RobotMap::shootershooterMotor2->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestShooter::Interrupted()
{

}
