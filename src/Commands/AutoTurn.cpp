#include "AutoTurn.h"

AutoTurn::AutoTurn(Direction direction, int position)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	mdirection = direction;
	mposition = position;
	Requires(Robot::chassis.get());

}
AutoTurn::AutoTurn(char direction, int position)
{
	mdirectionturn = direction;
	mposition = position;
}

// Called just before this Command runs the first time
void AutoTurn::Initialize()
{
	//Zeroing the encoders
	RobotMap::chassisleftMotor1->SetEncPosition(0);
	RobotMap::chassisrightMotor1->SetEncPosition(0);

	//Setting the Moters to Postion Mode
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPosition);

}

// Called repeatedly when this Command is scheduled to run
void AutoTurn::Execute()
{
	/*

	switch (mdirection){
	case turnRight:
		RobotMap::chassisleftMotor1->Set(mposition);
		RobotMap::chassisrightMotor1->Set(-mposition);
		break;
	case turnLeft:
		RobotMap::chassisleftMotor1->Set(-mposition);
		RobotMap::chassisrightMotor1->Set(mposition);
		break;
	}
	*/
	if(mdirectionturn == 'r')
	{
		RobotMap::chassisleftMotor1->Set(-mposition);
		RobotMap::chassisrightMotor1->Set(-mposition);
	}
	else if (mdirectionturn == 'l')
	{
		RobotMap::chassisleftMotor1->Set(mposition);
		RobotMap::chassisrightMotor1->Set(mposition);
	}


}

// Make this return true when this Command no longer needs to run execute()
bool AutoTurn::IsFinished()
{
	return RobotMap::chassisleftMotor1->GetPosition() == mposition;
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
