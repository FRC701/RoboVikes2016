// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "IntakeOn.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

IntakeOn::IntakeOn(double mspeed): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
	speed = mspeed;
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::intake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void IntakeOn::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void IntakeOn::Execute() {
	RobotMap::intakeintakeMotor1->Set(-/*speed*/1.0);
	RobotMap::intakeintakeMotor2->Set(-/*speed*/1.0);

}

// Make this return true when this Command no longer needs to run execute()
bool IntakeOn::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void IntakeOn::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeOn::Interrupted() {

}
