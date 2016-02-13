#include "PIDArmL.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

PIDArmL::PIDArmL() :
		PIDSubsystem("PIDArmL", 0.0000650, 0.0, 0.0)
{

	Disable();
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}
double PIDArmL::ReturnPIDInput()
{
	return RobotMap::intakeintakeMotor4->GetEncPosition();
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
}

void PIDArmL::UsePIDOutput(double output)
{
	RobotMap::intakeintakeMotor4->Set(output);
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
}

void PIDArmL::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}
