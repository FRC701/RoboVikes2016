#include "AutoTurn.h"

AutoTurn::AutoTurn(char direction, int position)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	mdirection = direction;
	mposition = position;
	Requires(Robot::chassis.get());

}

// Called just before this Command runs the first time
void AutoTurn::Initialize()
{
	//Zeroing the encoders
	RobotMap::chassisleftMotor1->SetEncPosition(0);
	RobotMap::chassisrightMotor1->SetEncPosition(0);

	//Setting the Moters to Postion Mode
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisleftMotor2->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisleftMotor3->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisrightMotor2->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisrightMotor3->SetControlMode(CANTalon::kPosition);

	//Zeroing the Motors
	RobotMap::chassisleftMotor1->Set(0.0);
	RobotMap::chassisleftMotor2->Set(0.0);
	RobotMap::chassisleftMotor3->Set(0.0);
	RobotMap::chassisrightMotor1->Set(0.0);
	RobotMap::chassisrightMotor2->Set(0.0);
	RobotMap::chassisrightMotor3->Set(0.0);

}

// Called repeatedly when this Command is scheduled to run
void AutoTurn::Execute()
{
	//Left Side
	RobotMap::chassisleftMotor1->Set(mposition);
	RobotMap::chassisleftMotor2->Set(mposition);
	RobotMap::chassisleftMotor3->Set(mposition);

	//Right Side
	RobotMap::chassisrightMotor1->Set(-mposition);
	RobotMap::chassisrightMotor2->Set(-mposition);
	RobotMap::chassisrightMotor3->Set(-mposition);

}

// Make this return true when this Command no longer needs to run execute()
bool AutoTurn::IsFinished()
{
	return RobotMap::chassisleftMotor1->GetSpeed() == 0;
}

// Called once after isFinished returns true
void AutoTurn::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTurn::Interrupted()
{

}
