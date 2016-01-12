#include <Commands/DefaultDrive.h>

DefaultDrive::DefaultDrive()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(chassis.get());
}

// Called just before this Command runs the first time
void DefaultDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DefaultDrive::Execute()
{
	CommandBase::chassis->leftMotor1->Set(CommandBase::oi->getdriver()->GetRawAxis(5));
	CommandBase::chassis->leftMotor2->Set(CommandBase::oi->getdriver()->GetRawAxis(5));
	CommandBase::chassis->leftMotor3->Set(CommandBase::oi->getdriver()->GetRawAxis(5));

	CommandBase::chassis->rightMotor1->Set(CommandBase::oi->getdriver()->GetRawAxis(1));
	CommandBase::chassis->rightMotor2->Set(CommandBase::oi->getdriver()->GetRawAxis(1));
	CommandBase::chassis->rightMotor3->Set(CommandBase::oi->getdriver()->GetRawAxis(1));
}

// Make this return true when this Command no longer needs to run execute()
bool DefaultDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DefaultDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultDrive::Interrupted()
{

}
