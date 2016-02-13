#include "PIDArm.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

PIDArm::PIDArm() :
		PIDSubsystem("PIDArm", 1.0, 0.0, 0.0)
{
	Disable();
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}

double PIDArm::ReturnPIDInput()
{
	return RobotMap::intakeintakeMotor3->GetEncPosition();
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
}

void PIDArm::UsePIDOutput(double output)
{
	if((RobotMap::intakeintakeMotor3->GetEncPosition() - RobotMap::intakeintakeMotor4->GetEncPosition()) < 0)
	{
		correction = 2;
	}
	else{
		correction = 1;
	}
	if((RobotMap::intakeintakeMotor4->GetEncPosition() - RobotMap::intakeintakeMotor3->GetEncPosition())> 0)
		{
			mcorrection = 2;
		}
		else{
			mcorrection = 1;
		}
	RobotMap::intakeintakeMotor3->Set(output / mcorrection);
	RobotMap::intakeintakeMotor4->Set(output / correction);
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
}

void PIDArm::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}

public
