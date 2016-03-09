#include "AutoDrive.h"

AutoDrive::AutoDrive(Distance distance)
{
	mdistance = distance;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::chassis.get());
}
AutoDrive::AutoDrive(int position)
{
	mposition = position;
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
}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute()
{
	switch (mdistance){
	case Distance_Reach:
		RobotMap::chassisleftMotor1->Set(-mposition);
		RobotMap::chassisrightMotor1->Set(mposition);
		break;
	case Distance_Cross:
		RobotMap::chassisleftMotor1->Set(-mposition);
		RobotMap::chassisrightMotor1->Set(mposition);
		//enddistance = position;
		break;
	case Distance_Shoot:
		RobotMap::chassisleftMotor1->Set(-mposition);
		RobotMap::chassisrightMotor1->Set(mposition);
		break;
	case Distance_LowBar:
		RobotMap::chassisleftMotor1->Set(mposition);
		RobotMap::chassisrightMotor1->Set(-mposition);
		//enddistance = -position;
		break;
	}
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
	return RobotMap::chassisleftMotor1->GetPosition() == mposition;//enddistance;
}

// Called once after isFinished returns true
void AutoDrive::End()
{
	RobotMap::chassisleftMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::chassisrightMotor1->SetControlMode(CANTalon::kPercentVbus);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted()
{
	AutoDrive::End();
}
