#include "AutoDrive.h"


static
int getPosition(AutoDrive::Distance distance) {
	int position = 0;
	switch (distance) {
	case AutoDrive::Distance_Reach:
		position = 12819;
		break;
	case AutoDrive::Distance_Cross:
		position = 44867;
		break;
	case AutoDrive::Distance_Shoot:
		position = 44867;
		break;
	case AutoDrive::Distance_LowBar:
		position = -44867;
		break;
	case AutoDrive::Distance_DoNothing:
	default:
		position = 0;
		break;
	}
	return position;
}

AutoDrive::AutoDrive(Distance distance)
: mdistance(distance),
  mposition(getPosition(distance)),
  counter(0),
  tolerance(10)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);

	Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void AutoDrive::Initialize()
{
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPosition);
	RobotMap::chassisleftMotor1->SetEncPosition(0.0);
	RobotMap::chassisrightMotor1->SetEncPosition(0.0);
	counter = 0;
	tolerance = 10;
}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute()
{
	RobotMap::chassisleftMotor1->Set(-mposition);
	RobotMap::chassisrightMotor1->Set(mposition);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive::IsFinished()
{
	if(abs(RobotMap::chassisleftMotor1->GetSpeed()) < 1.0)
		counter++;
	else
		counter = 0;
	if(counter == 10)
		return true;

	return RobotMap::chassisrightMotor1->GetPosition() <= mposition + tolerance
			&& RobotMap::chassisrightMotor1->GetPosition() >= mposition - tolerance;
}

// Called once after isFinished returns true
void AutoDrive::End()
{
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::chassisleftMotor1->Set(0);

	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::chassisrightMotor1->Set(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted()
{
	AutoDrive::End();
}
