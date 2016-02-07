// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "TankDrive.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

TankDrive::TankDrive(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(chassis);
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::chassis.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void TankDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() {
  int lY = Robot::oi->getdriver()->GetRawAxis(1) * -1;
	int rY = Robot::oi->getdriver()->GetRawAxis(5);
	//Left Side
	RobotMap::chassisleftMotor1->Set(lY);
	RobotMap::chassisleftMotor2->Set(lY);
	RobotMap::chassisleftMotor3->Set(lY);

	//Right Side
	RobotMap::chassisrightMotor1->Set(rY);
	RobotMap::chassisrightMotor2->Set(rY);
	RobotMap::chassisrightMotor3->Set(rY);

	//Automatic Shifters
	SmartDashboard::PutNumber("EncodeValue chassisrightmotor2", RobotMap::chassisrightMotor2->GetEncVel());
	double shiftUpVelocity = SmartDashboard::GetNumber("UpVelocity", 1000);

	double shiftDownVelocity = SmartDashboard::GetNumber("DownVelocity", 0);

	if ((RobotMap::chassisshift->Get() == DoubleSolenoid::kReverse)
			&& (RobotMap::chassisleftMotor1->GetEncVel()
			|| RobotMap::chassisrightMotor2->GetEncVel() >= shiftUpVelocity)
		/* && (Robot::oi->getdriver()->GetRawAxis(1)
				|| Robot::oi->getdriver()->GetRawAxis(5) >= .8))*/ )
	{
		RobotMap::chassisshift->Set(DoubleSolenoid::kForward);
		//RobotMap::chassisshiftRight->Set(DoubleSolenoid::kReverse);
	}

	if ((RobotMap::chassisshift->Get() == DoubleSolenoid::kForward)
				&& (RobotMap::chassisleftMotor1->GetEncVel()
				|| RobotMap::chassisrightMotor2->GetEncVel() <= shiftDownVelocity)
				//Change || back into && when used in the robot code.
			/*&& (Robot::oi->getdriver()->GetRawAxis(1)
					&& Robot::oi->getdriver()->GetRawAxis(5) == 0.1)) */)
	{
		RobotMap::chassisshift->Set(DoubleSolenoid::kReverse);
		//RobotMap::chassisshiftRight->Set(DoubleSolenoid::kForward);
	}

}

// Make this return true when this Command no longer needs to run execute()
bool TankDrive::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void TankDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDrive::Interrupted() {

}
