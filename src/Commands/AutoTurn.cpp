#include "AutoTurn.h"

static int getDirection(AutoTurn::Direction direction) {
	int posdirection = 0;

	switch (direction) {
	case AutoTurn::turnLeft:
		posdirection = -1;
		break;
	case AutoTurn::turnRight:
		posdirection = 1;
		break;
	}

	return posdirection;
}

AutoTurn::AutoTurn(Direction direction, int position)
: mdirection(direction),
  mposition(position),
  tolerance(10)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());

}

// Called just before this Command runs the first time
void AutoTurn::Initialize()
{
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisleftMotor1->SetEncPosition(0.0);
	RobotMap::chassisrightMotor1->SetEncPosition(0.0);
	tolerance = 10;

}

// Called repeatedly when this Command is scheduled to run
void AutoTurn::Execute()
{
	mposition *= getDirection(mdirection);
	RobotMap::chassisleftMotor1->Set(mposition);
	RobotMap::chassisrightMotor1->Set(mposition);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoTurn::IsFinished()
{
	return RobotMap::chassisrightMotor1->GetPosition() <= mposition + tolerance
				&& RobotMap::chassisrightMotor1->GetPosition() >= mposition - tolerance;

	// -5 -10 => -5 <= -10 + 10 <= 0
	// -5 -10 => -5 >= -10 - 10 >= -20

	// 5 10 => 5 <= 10 + 10 <= 20
	// 5 10 => 5 >= 10 - 10 >= 0

}

// Called once after isFinished returns true
void AutoTurn::End()
{
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::chassisleftMotor1->Set(0);

	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::chassisrightMotor1->Set(0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoTurn::Interrupted()
{
	AutoTurn::End();

}
