#include "SetShooter.h"
#include "../Robot.h"

SetShooter::SetShooter(DoubleSolenoid::Value value)
{
	mValue = value;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::shooter.get());
}

// Called just before this Command runs the first time
void SetShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void SetShooter::Execute()
{

	RobotMap::shooterliftShooter->Set(mValue);

}

// Make this return true when this Command no longer needs to run execute()
bool SetShooter::IsFinished()
{

	std::shared_ptr<CANTalon> rightSwitchTalon = RobotMap::chassisrightMotor1;		//Unnecessary variable used to clarify intent
	std::shared_ptr<CANTalon> leftSwitchTalon = RobotMap::chassisleftMotor1;		//	Use for meanwhile till code works, then
																					//	can change it if you wish
	if(mValue == DoubleSolenoid::kForward)
		return rightSwitchTalon->IsFwdLimitSwitchClosed()							//Used as a double test to make sure it is at
				|| leftSwitchTalon->IsFwdLimitSwitchClosed();						//	desired state
	else
		return rightSwitchTalon->IsRevLimitSwitchClosed()
				|| leftSwitchTalon->IsRevLimitSwitchClosed();


}

// Called once after isFinished returns true
void SetShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooter::Interrupted()
{

}
