// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Chassis.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/TankDrive.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Chassis::Chassis() : Subsystem("Chassis") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftMotor1 = RobotMap::chassisleftMotor1;
    leftMotor2 = RobotMap::chassisleftMotor2;
    leftMotor3 = RobotMap::chassisleftMotor3;
    rightMotor1 = RobotMap::chassisrightMotor1;
    rightMotor2 = RobotMap::chassisrightMotor2;
    rightMotor3 = RobotMap::chassisrightMotor3;
    shift = RobotMap::chassisshift;
    //Chassis 1 and 2 initialization
    leftMotor1->ConfigNominalOutputVoltage(+0.0f, -0.0f);
    leftMotor1->ConfigPeakOutputVoltage(+12.0f, -12.0f);

    leftMotor1->SelectProfileSlot(1);
    leftMotor1->SetPID(0.001, 0.0, 0.0, 0.0);
    leftMotor1->Set(0.0);

    leftMotor1->SelectProfileSlot(0);
    leftMotor1->SetPID(0.5, 0.0, 0.0, 0.0);
    leftMotor1->Set(0.0);

    rightMotor1->ConfigNominalOutputVoltage(+0.0f, -0.0f);
    rightMotor1->ConfigPeakOutputVoltage(+12.0f, -12.0f);

    rightMotor1->SelectProfileSlot(1);
    rightMotor1->SetPID(0.001, 0.0, 0.0, 0.0);
    rightMotor1->Set(0.0);

    rightMotor1->SelectProfileSlot(0);
    rightMotor1->SetPID(0.5, 0.0, 0.0, 0.0);
    rightMotor1->Set(0.0);


    //stoping the chassis motors from reading pnumatic sensors
    rightMotor1->ConfigLimitMode(CANTalon::kLimitMode_SrxDisableSwitchInputs);
    leftMotor1->ConfigLimitMode(CANTalon::kLimitMode_SrxDisableSwitchInputs);

    //Setting Motor 2 and 3 to follow the first motor
    //left side
    RobotMap::chassisleftMotor2->SetControlMode(CANTalon::kFollower);
    RobotMap::chassisleftMotor2->Set(1.0);
    RobotMap::chassisleftMotor3->SetControlMode(CANTalon::kFollower);
    RobotMap::chassisleftMotor3->Set(1.0);
    //right side
    RobotMap::chassisrightMotor2->SetControlMode(CANTalon::kFollower);
    RobotMap::chassisrightMotor2->Set(4.0);
    RobotMap::chassisrightMotor3->SetControlMode(CANTalon::kFollower);
    RobotMap::chassisrightMotor3->Set(4.0);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Chassis::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new TankDrive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

