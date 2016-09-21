

#include "ToggleShooter.h"


ToggleShooter::ToggleShooter(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
	Requires(Robot::shooter.get());

}

// Called just before this Command runs the first time
void ToggleShooter::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ToggleShooter::Execute() {
	if (RobotMap::shooterliftShooter->Get() == DoubleSolenoid::kForward)
		RobotMap::shooterliftShooter->Set(DoubleSolenoid::kReverse);

	else
		RobotMap::shooterliftShooter->Set(DoubleSolenoid::kForward);
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleShooter::IsFinished() {
    return true;
}

// Called once after isFinished returns true
void ToggleShooter::End() {

}

void ToggleShooter::Interrupted(){

}

