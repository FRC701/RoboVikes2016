#include "SpeedShooterControl.h"

SpeedShooterControl::SpeedShooterControl(double speed_): Command() {
    speed = speed_;
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void SpeedShooterControl::Initialize() {
	RobotMap::shootershooterMotor1->SetControlMode(CANTalon::kSpeed);
	RobotMap::shootershooterMotor1->Set(0.0);
	RobotMap::shootershooterMotor2->SetControlMode(CANTalon::kSpeed);
	RobotMap::shootershooterMotor2->Set(0.0);
	count = 0;
}

// Called repeatedly when this Command is scheduled to run
void SpeedShooterControl::Execute() {
	RobotMap::shootershooterMotor1->Set(speed);
	RobotMap::shootershooterMotor2->Set(speed);
	count++;

}

// Make this return true when this Command no longer needs to run execute()
bool SpeedShooterControl::IsFinished() {
    return count == 10;
}

// Called once after isFinished returns true
void SpeedShooterControl::End() {
	RobotMap::shootershooterMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::shootershooterMotor1->Set(0.0);
	RobotMap::shootershooterMotor2->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::shootershooterMotor2->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SpeedShooterControl::Interrupted() {
	SpeedShooterControl::End();
}
