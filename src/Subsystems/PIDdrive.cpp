#include "PIDdrive.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

PIDdrive::PIDdrive() :
		PIDSubsystem("PIDdrive", 1.0, 0.0, 0.0)
{
	SetSetpoint(5000);
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}

double PIDdrive::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	return RobotMap::chassisleftMotor1->Get();
}

void PIDdrive::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	RobotMap::chassisleftMotor1->Set(output);
	RobotMap::chassisleftMotor2->Set(output);
	RobotMap::chassisleftMotor3->Set(output);
	RobotMap::chassisrightMotor1->Set(-output);
	RobotMap::chassisrightMotor2->Set(-output);
	RobotMap::chassisrightMotor3->Set(-output);


}

void PIDdrive::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
