// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

//


#include "Intake.h"
#include "../RobotMap.h"
#include "../Commands/DefaultIntake.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

//static const int kIntakeMotor3AbsoluteOffset = 1131; //practice bot
//static const int kIntakeMotor4AbsoluteOffset = 2342;
static const int kIntakeMotor3AbsoluteOffset = 1605;
static const int kIntakeMotor4AbsoluteOffset = 1966;

static const double kIntakeMotor3ForwardPositionLimit =  0.160;
static const double kIntakeMotor3ReversePositionLimit = -0.03;
static const double kIntakeMotor4ForwardPositionLimit =  0.03;
static const double kIntakeMotor4ReversePositionLimit = -0.160;
static const double kIntakeMotorProfile1_P = 10.0;
static const double kIntakeMotorProfile1_F = 5.0;

Intake::Intake() : Subsystem("Intake") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    intakeMotor1 = RobotMap::intakeintakeMotor1;		//TODO Change name to better suit location.
    intakeMotor2 = RobotMap::intakeintakeMotor2;
    intakeMotor3 = RobotMap::intakeintakeMotor3;
    intakeMotor4 = RobotMap::intakeintakeMotor4;		//TODO inverse the arm motors

    intakeMotor3->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
    intakeMotor3->SetPosition(
    		(intakeMotor3->GetPulseWidthPosition() - kIntakeMotor3AbsoluteOffset) / 4096.0);
    intakeMotor3->SetSensorDirection(true);
    intakeMotor3->ConfigSoftPositionLimits(
    		kIntakeMotor3ForwardPositionLimit,
			kIntakeMotor3ReversePositionLimit);
    intakeMotor3->ConfigNominalOutputVoltage(+0.0f, -0.0f);
    intakeMotor3->ConfigPeakOutputVoltage(+12.0f, -12.0f);

    intakeMotor3->SelectProfileSlot(1);  //Slot 1 is used for the portculis
    intakeMotor3->SetPID(kIntakeMotorProfile1_P, 0.0, 0.0, kIntakeMotorProfile1_F);
    intakeMotor3->Set(0.0);

    intakeMotor3->SelectProfileSlot(0);  //Slot 0 for the rest of the levels
    intakeMotor3->SetPID(6.0, 0.0, 0.0, 0.0);
    intakeMotor3->Set(0.0);

    intakeMotor3->SetControlMode(CANTalon::kPercentVbus);
    intakeMotor3->Set(0.0);

    intakeMotor4->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
    intakeMotor4->SetPosition(
    		(intakeMotor4->GetPulseWidthPosition() - kIntakeMotor4AbsoluteOffset) / 4096.0);
    intakeMotor4->SetSensorDirection(true);
    intakeMotor4->ConfigSoftPositionLimits(
    		kIntakeMotor4ForwardPositionLimit,
			kIntakeMotor4ReversePositionLimit);
    //  intakeMotor4->SetInverted(true); We want this eventually
    intakeMotor4->ConfigNominalOutputVoltage(+0.0f, -0.0f);
    intakeMotor4->ConfigPeakOutputVoltage(+12.0f, -12.0f);

    intakeMotor4->SelectProfileSlot(1); //Slot 1 is used for the portculis
    intakeMotor4->SetPID(kIntakeMotorProfile1_P, 0.0, 0.0, kIntakeMotorProfile1_F);
    intakeMotor4->Set(0.0);

    intakeMotor4->SelectProfileSlot(0); //Slot 0 for the rest of the levels
    intakeMotor4->SetPID(6.0, 0.0, 0.0, 0.0);
    intakeMotor4->Set(0.0);

    intakeMotor4->SetControlMode(CANTalon::kPercentVbus);
    intakeMotor4->Set(0.0);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Intake::InitDefaultCommand() {

	SetDefaultCommand(new DefaultIntake());
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

