#include "BrakeModeToggle.h"

BrakeModeToggle::BrakeModeToggle()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void BrakeModeToggle::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void BrakeModeToggle::Execute()
{
	if(!RobotMap::chassisleftMotor1->GetBrakeEnableDuringNeutral())
	{
	RobotMap::chassisleftMotor1->ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
	RobotMap::chassisleftMotor2->ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
	RobotMap::chassisleftMotor3->ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
	RobotMap::chassisrightMotor1->ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
	RobotMap::chassisrightMotor2->ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
	RobotMap::chassisrightMotor3->ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
	}
	else
	{
	RobotMap::chassisleftMotor1->ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	RobotMap::chassisleftMotor2->ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	RobotMap::chassisleftMotor3->ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	RobotMap::chassisrightMotor1->ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	RobotMap::chassisrightMotor2->ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	RobotMap::chassisrightMotor3->ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	}



}

// Make this return true when this Command no longer needs to run execute()
bool BrakeModeToggle::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void BrakeModeToggle::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BrakeModeToggle::Interrupted()
{

}
