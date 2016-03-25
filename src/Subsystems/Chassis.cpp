


#include "Chassis.h"
#include "../RobotMap.h"
#include "../Commands/DefaultChassis.h"


Chassis::Chassis() : Subsystem("Chassis") {
    leftMotor1 = RobotMap::chassisLeftMotor1;
    leftMotor2 = RobotMap::chassisLeftMotor2;
    leftMotor3 = RobotMap::chassisLeftMotor3;
    rightMotor1 = RobotMap::chassisRightMotor1;
    rightMotor2 = RobotMap::chassisRightMotor2;
    rightMotor3 = RobotMap::chassisRightMotor3;
    driveShifter = RobotMap::chassisDriveShifter;

    driveShifter->Set(DoubleSolenoid::kReverse);

}

void Chassis::InitDefaultCommand() {

    SetDefaultCommand(new DefaultChassis());

}



