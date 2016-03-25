
#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "ShooterLightIndicator.h"
#include "WPILib.h"

class RobotMap {
public:
	static std::shared_ptr<CANTalon> chassisLeftMotor1;
	static std::shared_ptr<CANTalon> chassisLeftMotor2;
	static std::shared_ptr<CANTalon> chassisLeftMotor3;
	static std::shared_ptr<CANTalon> chassisRightMotor1;
	static std::shared_ptr<CANTalon> chassisRightMotor2;
	static std::shared_ptr<CANTalon> chassisRightMotor3;
	static std::shared_ptr<DoubleSolenoid> chassisDriveShifter;
	static std::shared_ptr<CANTalon> intakeMotor1;
	static std::shared_ptr<CANTalon> intakeMotor2;
	static std::shared_ptr<CANTalon> intakeMotor3;
	static std::shared_ptr<CANTalon> intakeMotor4;
	static std::shared_ptr<CANTalon> shooterMotor1;
	static std::shared_ptr<CANTalon> shooterMotor2;
	static std::shared_ptr<CANTalon> shooterRollerMotor;
	static std::shared_ptr<DoubleSolenoid> shooterLiftSolenoid;
	static std::shared_ptr<ShooterLightIndicator> sli;

	static void init();
};
#endif
