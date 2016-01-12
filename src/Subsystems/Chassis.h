#ifndef EXAMPLE_SUBSYSTEM_H
#define EXAMPLE_SUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Chassis: public Subsystem
{
private:

public:
	Chassis();
	void InitDefaultCommand();
	static std::shared_ptr<CANTalon> leftMotor1;
	static std::shared_ptr<CANTalon> leftMotor2;
	static std::shared_ptr<CANTalon> leftMotor3;

	static std::shared_ptr<CANTalon> rightMotor1;
	static std::shared_ptr<CANTalon> rightMotor2;
	static std::shared_ptr<CANTalon> rightMotor3;
};

#endif
