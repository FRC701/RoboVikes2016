// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include <Commands/Scheduler.h>
#include <Robot.h>
#include <RobotBase.h>
#include <memory>

std::shared_ptr<Chassis> Robot::chassis;
std::shared_ptr<Intake> Robot::intake;
std::shared_ptr<Shooter> Robot::shooter;
std::unique_ptr<OI> Robot::oi;

void Robot::RobotInit() {
	RobotMap::init();

    chassis.reset(new Chassis());
    intake.reset(new Intake());
    shooter.reset(new Shooter());
	oi.reset(new OI());

	autonomousCommand.reset(new AutonomousCommand());

}

void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {

 	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
	SmartDashboard::PutNumber("EncoderRyanPosition", RobotMap::intakeIntakeMotor1->GetEncPosition());
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

