#include "PIDArm.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

PIDArm::PIDArm() :
		PIDSubsystem("PIDArm", 0.0000650, 0.0, 0.0)
{
	//mcorrection = 1;
	//correction = 1;
	Disable();

	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}

double PIDArm::ReturnPIDInput()
{
	return RobotMap::intakeintakeMotor3->GetEncPosition();
	//return RobotMap::intakeintakeMotor4->GetEncPosition ();


	//return RobotMap::intakeintakeMotor4->GetEncPosition();
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
}

void PIDArm::UsePIDOutput(double output)
{
	/*if((RobotMap::intakeintakeMotor3->GetEncPosition() - RobotMap::intakeintakeMotor4->GetEncPosition()) < 0)
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
		}*/
	RobotMap::intakeintakeMotor3->Set(output);

	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
}

void PIDArm::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
}


