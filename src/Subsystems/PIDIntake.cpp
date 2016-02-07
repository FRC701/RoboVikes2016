#include "PIDIntake.h"
#include "../Robot.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "../Commands/PIDintake.h"
PIDIntake::PIDIntake() :
		PIDSubsystem("PIDIntake", Robot::prefs->GetDouble("PValueIntake", 0.0), 0.0, 0.0)
{
	SetSetpoint(1);
	Disable();
	SetAbsoluteTolerance(1);
	// Use these to get going:
	// SetSetpoint() -  Sets w*here the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}

double PIDIntake::ReturnPIDInput()
{

	if (RobotMap::intakeintakeMotor1->GetEncPosition() && RobotMap::intakeintakeMotor2->GetEncPosition() == true)
		return true;
	else
		return false;
	//return RobotMap::intakeintakeMotor1->GetEncPosition();
	//return RobotMap::intakeintakeMotor2->GetEncPosition();
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
}

void PIDIntake::UsePIDOutput(double output)
{
	RobotMap::intakeintakeMotor1->Set(output);
	RobotMap::intakeintakeMotor2->Set(output);
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
}

void PIDIntake::InitDefaultCommand()
{

	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new PIDintake());

}
