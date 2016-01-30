#include "RaiseIntake.h"
#include "Robot.h"
RaiseIntake::RaiseIntake()
{	Requires(Robot::intake.get());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	// Help me please. Day 1 and I'm already suffering in this hellhole. Someone please kill me, I must go to hell kappa123 AwpticGameing
}

// Called just before this Command runs the first time
void RaiseIntake::Initialize()
{


}

// Called repeatedly when this Command is scheduled to run
void RaiseIntake::Execute(){
RobotMap::intakeintakeMotor3->Set(0);
}

// Make this return true when this Command no longer needs to run execute()
bool RaiseIntake::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void RaiseIntake::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RaiseIntake::Interrupted()
{

}
