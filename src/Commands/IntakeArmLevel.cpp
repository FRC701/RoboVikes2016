#include "IntakeArmLevel.h"

IntakeArmLevel::IntakeArmLevel(ArmLevelPosition position)
: mposition(position),
  count(0)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
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
		RobotMap::intakeintakeMotor3->Set(-0.026f);
		RobotMap::intakeintakeMotor4->Set(0.022f);
		break;
	case ArmLevelPosition_Scale:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(0);

		RobotMap::intakeintakeMotor3->Set(0.150f);
		RobotMap::intakeintakeMotor4->Set(-0.150f);
		break;
	case ArmLevelPosition_LowGoal:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(0);

		RobotMap::intakeintakeMotor3->Set(0.151f);
		RobotMap::intakeintakeMotor4->Set(-0.153f);
		break;
	case ArmLevelPosition_Moat:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(0);

		RobotMap::intakeintakeMotor3->Set(0.08f);
		RobotMap::intakeintakeMotor4->Set(-0.08f);
		break;
	case ArmLevelPosition_Cheval:
		RobotMap::intakeintakeMotor3->SelectProfileSlot(0);
		RobotMap::intakeintakeMotor4->SelectProfileSlot(0);

		RobotMap::intakeintakeMotor3->Set(0.0);
		RobotMap::intakeintakeMotor4->Set(0.0);
			break;


	}

	/*
	static int counter = 0;
	std::stringstream str;
		str << "t: " << counter++;
	SmartDashboard::PutString("Count",str.str());
	*/
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeArmLevel::IsFinished()
{
	/*
	if(abs(RobotMap::intakeintakeMotor3->GetClosedLoopError()) <= 40
			|| abs(RobotMap::intakeintakeMotor3->GetClosedLoopError()) <= 40)
		count++;
	else
		count = 0;
	if (count == 3)
		return true;
	else
		return false;
		*/
	return true;
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
