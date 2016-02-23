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
#include "Commands/AutoDrive.h"
#include "Commands/IntakeArmLevel.h"
#include "Commands/IntakeOn.h"
#include "Commands/RollerOn.h"
#include "Commands/SHooterControl.h"
#include "Commands/IntakeArmOn.h"
#include "Commands/SelfTestCommand.h"
#include "Commands/TestChassis.h"
#include "Commands/TestShooter.h"
#include "Commands/TestArms.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
std::shared_ptr<Chassis> Robot::chassis;
std::shared_ptr<Intake> Robot::intake;
std::shared_ptr<Shooter> Robot::shooter;
std::unique_ptr<OI> Robot::oi;
std::shared_ptr<Lights> Robot::lights;
std::shared_ptr<SendableChooser> Robot::chooser;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
void SmartDashboard (){
	//Current of all the motors
	SmartDashboard::PutNumber("Current: LeftChassis 1", RobotMap::chassisleftMotor1->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: LeftChassis 2", RobotMap::chassisleftMotor2->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: LeftChassis 3", RobotMap::chassisleftMotor3->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: RightChassis 1", RobotMap::chassisrightMotor1->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: RightChassis 1", RobotMap::chassisrightMotor2->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: RightChassis 1", RobotMap::chassisrightMotor3->GetOutputCurrent());
	SmartDashboard::PutNumber("Currrent:Shooter Roller", RobotMap::shooterrollerMotor->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: Shooter Left", RobotMap::shootershooterMotor1->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: Shooter Right", RobotMap::shootershooterMotor2->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: Intake In", RobotMap::intakeintakeMotor1->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: Intake Side", RobotMap::intakeintakeMotor2->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: Intake Arm Right", RobotMap::intakeintakeMotor3->GetOutputCurrent());
	SmartDashboard::PutNumber("Current: Intake Arm Left", RobotMap::intakeintakeMotor4->GetOutputCurrent());
	RobotMap::lightsfeatureLights->Set(Relay::kForward);
	//encoder position for the motors
	SmartDashboard::PutNumber("Left Encoder", RobotMap::chassisleftMotor1->GetPosition());
	SmartDashboard::PutNumber("Right Encoder", RobotMap::chassisrightMotor1->GetPosition());
	SmartDashboard::PutNumber("IntakeMotor3 Pos", RobotMap::intakeintakeMotor3->GetPosition());
	SmartDashboard::PutNumber("IntakeMotor4 Pos", RobotMap::intakeintakeMotor4->GetPosition());
	SmartDashboard::PutNumber("IntakeMotor3 Pulse Width Pos", RobotMap::intakeintakeMotor3->GetPulseWidthPosition());
	SmartDashboard::PutNumber("IntakeMotor4 Pulse Width Pos", RobotMap::intakeintakeMotor4->GetPulseWidthPosition());
	SmartDashboard::PutNumber("IntakeMotor3 Enc Pos", RobotMap::intakeintakeMotor3->GetEncPosition());
	SmartDashboard::PutNumber("IntakeMotor4 Enc Pos", RobotMap::intakeintakeMotor4->GetEncPosition());
	//volatge of the arm motors
	SmartDashboard::PutNumber("Intake Motor 3 Out Volts", RobotMap::intakeintakeMotor3->GetOutputVoltage()
			/RobotMap::intakeintakeMotor3->GetBusVoltage());
	SmartDashboard::PutNumber("Intake Motor 4 Out Volts", RobotMap::intakeintakeMotor4->GetOutputVoltage()
			/RobotMap::intakeintakeMotor4->GetBusVoltage());
	//Output current of the arms
	SmartDashboard::PutNumber("Intake Motor 3 Out Current", RobotMap::intakeintakeMotor3->GetOutputCurrent());
	SmartDashboard::PutNumber("Intake Motor 4 Out Current", RobotMap::intakeintakeMotor4->GetOutputCurrent());
	//running commands and motors
	SmartDashboard::PutData("Arm Level Intake", new IntakeArmLevel(IntakeArmLevel::ArmLevelPosition_Intake));
	SmartDashboard::PutData("Arm Level Porculis", new IntakeArmLevel(IntakeArmLevel::ArmLevelPosition_Portculis));
	SmartDashboard::PutData("Arm Level Scale", new IntakeArmLevel(IntakeArmLevel::ArmLevelPosition_Scale));
	SmartDashboard::PutData("Shooter Control", new ShooterControl (3000));
	SmartDashboard::PutData("Roller On", new RollerOn(0.5));
	SmartDashboard::PutData("Intake On", new IntakeOn(0.5));
	SmartDashboard::PutData("IntakeArmOn", new IntakeArmOn(0.5));

	SmartDashboard::PutData("Self Test", new SelfTestCommand());
	SmartDashboard::PutData("Test Chassis", new TestChassis());
	SmartDashboard::PutData("Test Shooter", new TestShooter());
	SmartDashboard::PutData("Test Arms", new TestArms());


}
void Robot::RobotInit() {

	RobotMap::init();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    chassis.reset(new Chassis());
    intake.reset(new Intake());
    shooter.reset(new Shooter());
    lights.reset(new Lights());
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
	chooser.reset(new SendableChooser ());
		chooser->AddDefault("AutonomousCommand", new AutonomousCommand());
		chooser->AddObject("PID Drive", new AutoDrive(AutoDrive::Distance_Reach));
		SmartDashboard::PutData("Autonomous modes", chooser.get());

	//RobotMap::shooterliftShooter->Set(DoubleSolenoid::kForward);
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
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
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
	RobotMap::chassisshift->Set(DoubleSolenoid::kReverse);
	RobotMap::shooterliftShooter->Set(DoubleSolenoid::kReverse);
	RobotMap::lightsfeatureLights->Set(Relay::kForward);
}

void Robot::TeleopPeriodic() {
	Scheduler::GetInstance()->Run();
	SmartDashboard ();

}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

