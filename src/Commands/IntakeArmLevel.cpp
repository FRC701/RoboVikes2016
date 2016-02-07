#include "IntakeArmLevel.h"

IntakeArmLevel::IntakeArmLevel(ArmLevelPosition position)
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
	RobotMap::intakeintakeMotor4->SetControlMode(CANTalon::kPosition);
	count = 0;

}

// Called repeatedly when this Command is scheduled to run
void IntakeArmLevel::Execute()
{
	switch(mposition) {
	case ArmLevelPosition_Intake:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor3->Set(0.0);
		RobotMap::intakeintakeMotor4->Set(0.0);
		break;
	case ArmLevelPosition_Portculis:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(1);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(1);
		RobotMap::intakeintakeMotor3->Set(-0.026);
		RobotMap::intakeintakeMotor4->Set(0.022);
		break;
	case ArmLevelPosition_Scale:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(0);

		RobotMap::intakeintakeMotor3->Set(0.150);
		RobotMap::intakeintakeMotor4->Set(-0.150);
		break;
	}

	static int counter = 0;
	std::stringstream str;
		str << "t: " << counter++;
	SmartDashboard::PutString("Count",str.str());

}

// Make this return true when this Command no longer needs to run execute()
bool IntakeArmLevel::IsFinished()
{
	if(abs(RobotMap::intakeintakeMotor3->GetClosedLoopError()) <= 10
			|| abs(RobotMap::intakeintakeMotor3->GetClosedLoopError()) <= 10)
		count++;
	else
		count = 0;
	if (count == 3)
		return true;
	else
		return false;
}

// Called once after isFinished returns true
void IntakeArmLevel::End()
{
	//RobotMap::shooterrollerMotor->SetControlMode(CANTalon::kPercentVbus);
	//RobotMap::shooterrollerMotor->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeArmLevel::Interrupted()
{

}