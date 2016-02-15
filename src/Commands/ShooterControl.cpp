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
#include <sstream>

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
	RobotMap::shootershooterMotor1->SetControlMode(CANTalon::kSpeed);
	RobotMap::shootershooterMotor1->Set(0.0);
	RobotMap::shootershooterMotor2->SetControlMode(CANTalon::kSpeed);
	RobotMap::shootershooterMotor2->Set(0.0);

}

// Called repeatedly when this Command is scheduled to run
void ShooterControl::Execute() {
	RobotMap::shootershooterMotor1->Set(speed);
	//RobotMap::shootershooterMotor2->Set(-speed);

	//double targetSpeed = RobotMap::shootershooterMotor1->Get() /** 6000 */;

	double motorOutput = RobotMap::shootershooterMotor1->GetOutputVoltage() / RobotMap::shootershooterMotor1->GetBusVoltage();

	static int counter = 0;
	std::stringstream str;
	str << "t: " << counter++
			<< ", mtr:" << motorOutput
			<< ", spd:" << RobotMap::shootershooterMotor1->GetSpeed()
			<< ", err:" << RobotMap::shootershooterMotor1->GetClosedLoopError()
			<< ", trg:" << speed;

	SmartDashboard::PutString("TalonSpeedControl", str.str());

	SmartDashboard::PutNumber("TSC-Error", RobotMap::shootershooterMotor1->GetClosedLoopError());


}

// Make this return true when this Command no longer needs to run execute()
bool ShooterControl::IsFinished() {
    return RobotMap::shooterrollerMotor->IsFwdLimitSwitchClosed();
}

// Called once after isFinished returns true
void ShooterControl::End() {
	RobotMap::shootershooterMotor1->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::shootershooterMotor1->Set(0.0);
	RobotMap::shootershooterMotor2->SetControlMode(CANTalon::kPercentVbus);
	RobotMap::shootershooterMotor2->Set(0.0);

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterControl::Interrupted() {
	End();
}
