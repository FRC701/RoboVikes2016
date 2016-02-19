// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<CANTalon> chassisleftMotor1;
	static std::shared_ptr<CANTalon> chassisleftMotor2;
	static std::shared_ptr<CANTalon> chassisleftMotor3;
	static std::shared_ptr<CANTalon> chassisrightMotor1;
	static std::shared_ptr<CANTalon> chassisrightMotor2;
	static std::shared_ptr<CANTalon> chassisrightMotor3;
	static std::shared_ptr<DoubleSolenoid> chassisshiftLeft;
	static std::shared_ptr<DoubleSolenoid> chassisshiftRight;
	static std::shared_ptr<CANTalon> intakeintakeMotor1;
	static std::shared_ptr<CANTalon> intakeintakeMotor2;
	static std::shared_ptr<CANTalon> intakeintakeMotor3;
	static std::shared_ptr<CANTalon> intakeintakeMotor4;
	static std::shared_ptr<CANTalon> shootershooterMotor1;
	static std::shared_ptr<CANTalon> shootershooterMotor2;
	static std::shared_ptr<CANTalon> shooterrollerMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	//static std::shared_ptr<NetworkTable> cameraTable;

	static void init();
};
#endif
