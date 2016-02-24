#include "TestArms.h"

TestArms::TestArms()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void TestArms::Initialize()
{
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::intakeintakeMotor4->SetControlMode(CANTalon::kPercentVbus);
}

// Called repeatedly when this Command is scheduled to run
void TestArms::Execute()
{
	RobotMap::intakeintakeMotor3->Set(-0.8);
	RobotMap::intakeintakeMotor4->Set(0.8);
}

// Make this return true when this Command no longer needs to run execute()
bool TestArms::IsFinished()
{
	return RobotMap::intakeintakeMotor3->GetSpeed() < 0 && RobotMap::intakeintakeMotor4->GetSpeed() > 0;
}

// Called once after isFinished returns true
void TestArms::End()
{
	RobotMap::intakeintakeMotor3->Set(0.0);
	RobotMap::intakeintakeMotor4->Set(0.0);
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPosition);
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPosition);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestArms::Interrupted()
{

}
