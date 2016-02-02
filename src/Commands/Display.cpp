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

	//Displaying Values
    SmartDashboard::PutNumber("EncoderValue of RightSide",RobotMap::chassisrightMotor1->GetEncPosition());
    SmartDashboard::PutNumber("EncoderValue of LeftSide", RobotMap::chassisleftMotor1->GetEncPosition());
    SmartDashboard::PutNumber("Speed of Shooter1", RobotMap::shootershooterMotor1->GetEncVel());
    SmartDashboard::PutNumber("Speed of Shooter2", RobotMap::shootershooterMotor2->GetEncVel());
    SmartDashboard::PutNumber("Intake Position1", RobotMap::intakeintakeMotor1->GetEncPosition());
    SmartDashboard::PutNumber("Intake Position2", RobotMap::intakeintakeMotor2->GetEncPosition());

    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    SmartDashboard::PutData("ShifterToggle", new ShifterToggle());
    SmartDashboard::PutData("ShooterControl: shooterOff", new ShooterControl(0.0));
    SmartDashboard::PutData("ShooterControl: shooter50P", new ShooterControl(0.5));
    SmartDashboard::PutData("ShooterControl: shooter55P", new ShooterControl(0.55));
    SmartDashboard::PutData("ShooterControl: shooter60P", new ShooterControl(0.6));
    SmartDashboard::PutData("ShooterControl: shooter65P", new ShooterControl(0.65));
    SmartDashboard::PutData("ShooterControl: shooter70P", new ShooterControl(0.7));
    SmartDashboard::PutData("ShooterControl: shooter75P", new ShooterControl(0.75));
    SmartDashboard::PutData("ShooterControl: shooter80P", new ShooterControl(0.8));
    SmartDashboard::PutData("ShooterControl: shooter85P", new ShooterControl(0.85));
    SmartDashboard::PutData("ShooterControl: shooter90P", new ShooterControl(0.9));
    SmartDashboard::PutData("ShooterControl: shooter95P", new ShooterControl(0.95));
    SmartDashboard::PutData("ShooterControl: shooter100P", new ShooterControl(1.0));
    SmartDashboard::PutData("ShooterControl: shooterReverse", new ShooterControl(-0.25));
    SmartDashboard::PutData("TankDrive", new TankDrive());

    SmartDashboard::PutData("Shooter Vary Speed", new Shooter Control(SmartDashboard::GetNumber("Shooter Speed")));
    //Getting Values off SmartDashboard




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
