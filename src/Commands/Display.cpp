#include "Display.h"
#include "SmartDashboard/SmartDashboard.h"

Display::Display(): Command()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::dashboard.get());
}

// Called just before this Command runs the first time
void Display::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Display::Execute()
{
	//int count;
	//count++;
	//SmartDashboard::PutNumber("Count", count);
	//Encoder Get Position
    SmartDashboard::PutNumber("EncoderValue",RobotMap::chassisrightMotor2->GetEncPosition());
    SmartDashboard::PutString("Test", "It Works");

    //Getting Values
    SmartDashboard::GetNumber("PID Drive Setpoint", doublesetvalue);

}

// Make this return true when this Command no longer needs to run execute()
bool Display::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Display::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Display::Interrupted()
{

}
