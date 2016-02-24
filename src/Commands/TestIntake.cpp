#include "TestIntake.h"

TestIntake::TestIntake()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void TestIntake::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TestIntake::Execute()
{
	RobotMap::intakeintakeMotor1->Set(1.0);
	RobotMap::intakeintakeMotor2->Set(1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool TestIntake::IsFinished()
{
	return RobotMap::intakeintakeMotor1->GetOutputCurrent() > 0 && RobotMap::intakeintakeMotor2->GetOutputCurrent() > 0;
}

// Called once after isFinished returns true
void TestIntake::End()
{
	RobotMap::intakeintakeMotor1->Set(0.0);
	RobotMap::intakeintakeMotor2->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestIntake::Interrupted()
{

}
