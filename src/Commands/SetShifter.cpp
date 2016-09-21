#include "SetShifter.h"

SetShifter::SetShifter(char speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	mspeed = speed;
	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void SetShifter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SetShifter::Execute()
{
	if(mspeed == 'l')
		RobotMap::chassisshift->Set(DoubleSolenoid::kReverse);
	else if(mspeed == 'h')
		RobotMap::chassisshift->Set(DoubleSolenoid::kForward);
	else															//This would be when you want to default
		RobotMap::chassisshift->Set(DoubleSolenoid::kForward);		//High for now, recommend enum
}

// Make this return true when this Command no longer needs to run execute()
bool SetShifter::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void SetShifter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShifter::Interrupted()
{

}
