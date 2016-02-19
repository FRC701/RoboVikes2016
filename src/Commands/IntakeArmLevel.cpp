#include "IntakeArmLevel.h"

IntakeArmLevel::IntakeArmLevel(int position)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	mposition = position;
	Requires(Robot::intake.get());
}

// Called just before this Command runs the first time
void IntakeArmLevel::Initialize()
{
	//RobotMap::shooterrollerMotor->SetControlMode(CANTalon::kPosition);
	//RobotMap::shooterrollerMotor->Set(0.0);
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPosition);
	RobotMap::intakeintakeMotor3->Set(0.0);
	RobotMap::intakeintakeMotor4->SetControlMode(CANTalon::kPosition);
	RobotMap::intakeintakeMotor4->Set(0.0);

}

// Called repeatedly when this Command is scheduled to run
void IntakeArmLevel::Execute()
{
	/*if (mposition == 1)
	{
		RobotMap::intakeintakeMotor3->SetPulseWidthPosition(1213);
		RobotMap::intakeintakeMotor4->SetPulseWidthPosition(2268);
	}
	else if (mposition == 2)
	{
		RobotMap::intakeintakeMotor3->SetPulseWidthPosition(1129);
		RobotMap::intakeintakeMotor4->SetPulseWidthPosition(2351);
	}
	else if (mposition == 3)
	{
		RobotMap::intakeintakeMotor3->SetPulseWidthPosition(447);
		RobotMap::intakeintakeMotor4->SetPulseWidthPosition(3039);
	}*/
	//if (mposition == 1)
	//{
		RobotMap::intakeintakeMotor3->Set(10000);
		RobotMap::intakeintakeMotor4->Set(20);
	//}
	/*else if (mposition == 2)
	{
		RobotMap::intakeintakeMotor3->Set(0.105);
		RobotMap::intakeintakeMotor4->Set(0.746);
	}*/
	//RobotMap::shooterrollerMotor->Set(10000);

	static int counter = 0;
	std::stringstream str;
		str << "t: " << counter++;
	SmartDashboard::PutString("Count",str.str());

}

// Make this return true when this Command no longer needs to run execute()
bool IntakeArmLevel::IsFinished()
{
	return false; //TODO This is set to true it needs to be changed.
}

// Called once after isFinished returns true
void IntakeArmLevel::End()
{
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::intakeintakeMotor3->Set(0.0);
	RobotMap::intakeintakeMotor4->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::intakeintakeMotor4->Set(0.0);
	//RobotMap::shooterrollerMotor->SetControlMode(CANTalon::kPercentVbus);
	//RobotMap::shooterrollerMotor->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeArmLevel::Interrupted()
{

}
