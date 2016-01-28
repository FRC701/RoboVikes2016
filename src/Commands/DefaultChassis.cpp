// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "DefaultChassis.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

DefaultChassis::DefaultChassis(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::chassis.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void DefaultChassis::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DefaultChassis::Execute() {
    int leftY = Robot::oi->getdriver()->GetRawAxis(1) * -1;     //Getting the joystick value for left Y axis
    int rightY = Robot::oi->getdriver()->GetRawAxis(5);         //Getting the jeystick value for right y axis

    RobotMap::chassisLeftMotor1->Set(leftY);
    RobotMap::chassisLeftMotor2->Set(leftY);        //Setting the motors to leftY
    RobotMap::chassisLeftMotor3->Set(leftY);

    RobotMap::chassisRightMotor1->Set(rightY);
    RobotMap::chassisRightMotor2->Set(rightY);      //Setting the motors to rightY
    RobotMap::chassisRightMotor3->Set(rightY);
}

// Make this return true when this Command no longer needs to run execute()
bool DefaultChassis::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void DefaultChassis::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DefaultChassis::Interrupted() {

}
