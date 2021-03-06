// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ShooterControl.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

ShooterControl::ShooterControl(double speed_): Command() {
    speed = speed_;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void ShooterControl::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ShooterControl::Execute() {
	RobotMap::shootershooterMotor1->Set(-speed);
	RobotMap::shootershooterMotor2->Set(speed);

}

// Make this return true when this Command no longer needs to run execute()
bool ShooterControl::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void ShooterControl::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterControl::Interrupted() {

}
