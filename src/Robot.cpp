// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Robot.h"
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/PIDSet.h"
#include "Commands/BangBangShooter.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
std::shared_ptr<Chassis> Robot::chassis;
std::shared_ptr<Intake> Robot::intake;
std::shared_ptr<Shooter> Robot::shooter;
std::shared_ptr<PIDdrive> Robot::piddrive;
std::unique_ptr<OI> Robot::oi;
std::shared_ptr<SendableChooser> Robot::chooser;
std::shared_ptr<Dashboard> Robot::dashboard;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit() {
	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    chassis.reset(new Chassis());
    intake.reset(new Intake());
    shooter.reset(new Shooter());
    piddrive.reset(new PIDdrive());
    dashboard.reset(new Dashboard());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi.reset(new OI());

	// instantiate the command used for the autonomous period
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand.reset(new AutonomousCommand());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	chooser.reset(new SendableChooser);
	chooser->AddDefault("AutonomousCommand", new AutonomousCommand());
	chooser->AddObject("PID Drive", new PIDSet(100));
	SmartDashboard::PutData("Autonomous modes", chooser.get());
  }

/**
 * This function is called when the disabled button is hit.
 * You can use it to reset subsystems before shutting down.
 */
void Robot::DisabledInit(){

}

void Robot::DisabledPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {

	autonomousCommand.reset((Command *) chooser->GetSelected());
	autonomousCommand->Start();
	//if (autonomousCommand.get() != nullptr)
	//	autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// these lines or comment it out.
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
	//Setting starting values of Pneumatics......................
	//RobotMap::chassisshiftLeft->Set(DoubleSolenoid::kReverse);
	//RobotMap::chassisshiftRight->Set(DoubleSolenoid::kReverse);

	//Test Bang Bang
	SmartDashboard::GetNumber("BangBangSpeed", BangBangSpeed);
	SmartDashboard::PutData("BangBangShooter", new BangBangShooter(BangBangSpeed));


}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

