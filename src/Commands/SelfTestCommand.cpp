#include "SelfTestCommand.h"

SelfTestCommand::SelfTestCommand()
: isChassisGood(false),
  isIntakeGood(false),
  isArmsGood(false),
  isShooterGood(false),
  isShooterLift(false),
  ShooterLiftLeft(false),
  ShooterLiftRight(false),
  Timer(0)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void SelfTestCommand::Initialize()
{
	RobotMap::shootershooterMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::shootershooterMotor2->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::intakeintakeMotor4->SetControlMode(CANTalon::kPercentVbus);
	isChassisGood = false;
	isArmsGood = false;
	isShooterGood = false;
	isIntakeGood = false;
	isShooterLift = false;
	ShooterLiftLeft = false;
	ShooterLiftRight = false;
	Timer = 0;
}

// Called repeatedly when this Command is scheduled to run
void SelfTestCommand::Execute()
{
	if(Timer == 0)
	{
		RobotMap::chassisleftMotor1->Set(1.0);
		RobotMap::chassisrightMotor1->Set(1.0);
		isChassisGood = RobotMap::chassisleftMotor1->GetSpeed() > 0 && RobotMap::chassisrightMotor1->GetSpeed() > 0;
		RobotMap::chassisleftMotor1->Set(0.0);
		RobotMap::chassisrightMotor1->Set(0.0);

		RobotMap::shootershooterMotor1->Set(1.0);
		RobotMap::shootershooterMotor2->Set(1.0);
		isShooterGood = RobotMap::shootershooterMotor1->GetSpeed() > 0 && RobotMap::shootershooterMotor2->GetSpeed() < 0;
		RobotMap::shootershooterMotor1->Set(0.0);
		RobotMap::shootershooterMotor2->Set(0.0);

		RobotMap::intakeintakeMotor3->Set(1.0);
		RobotMap::intakeintakeMotor4->Set(1.0);
		isArmsGood = RobotMap::intakeintakeMotor3->GetSpeed() > 0 && RobotMap::intakeintakeMotor4 < 0;
		RobotMap::intakeintakeMotor3->Set(0.0);
		RobotMap::intakeintakeMotor4->Set(0.0);

		RobotMap::intakeintakeMotor1->Set(1.0);
		RobotMap::intakeintakeMotor2->Set(1.0);
		isIntakeGood = RobotMap::intakeintakeMotor3->GetOutputCurrent() > 0 && RobotMap::intakeintakeMotor4->GetOutputCurrent() < 0;
		RobotMap::intakeintakeMotor1->Set(0.0);
		RobotMap::intakeintakeMotor2->Set(0.0);
	}
	else
	{
		if (Timer == 100){
			ShooterLiftLeft = RobotMap::chassisleftMotor1->IsFwdLimitSwitchClosed()|| RobotMap::chassisrightMotor1->IsFwdLimitSwitchClosed();
			RobotMap::shooterliftShooter->Set(DoubleSolenoid::kReverse);
		}
		else if (Timer == 200)
			ShooterLiftRight = RobotMap::chassisleftMotor1->IsRevLimitSwitchClosed()|| RobotMap::chassisrightMotor1->IsRevLimitSwitchClosed();
		isShooterLift = ShooterLiftLeft && ShooterLiftRight;

	}
	Timer++;
	SmartDashboard::PutNumber("Self Test: Timer", Timer);

}

// Make this return true when this Command no longer needs to run execute()
bool SelfTestCommand::IsFinished()
{
	return Timer == 200;
}

// Called once after isFinished returns true
void SelfTestCommand::End()
{
	std::stringstream message;
	if(isChassisGood && isShooterGood && isArmsGood && isIntakeGood && isShooterLift)
		message << "System is good";
	else
		message << "System has failed"
			<<"Chassis status" << isChassisGood
			<<"Shooter status" << isShooterGood
			<<"Arms status" << isArmsGood
			<<"Intakae status" << isIntakeGood
			<<"Shooter Lift statud" << isShooterLift;
	SmartDashboard::PutString("Robot Status", message.str());

	RobotMap::shootershooterMotor1->SetControlMode(CANTalon::kSpeed);
	RobotMap::shootershooterMotor2->SetControlMode(CANTalon::kSpeed);
	RobotMap::intakeintakeMotor3->SetControlMode(CANTalon::kPosition);
	RobotMap::intakeintakeMotor4->SetControlMode(CANTalon::kPosition);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SelfTestCommand::Interrupted()
{

}