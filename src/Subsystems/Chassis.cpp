#include <Subsystems/Chassis.h>
#include "../RobotMap.h"
#include "../Commands/DefaultDrive.h"

std::shared_ptr<CANTalon> Chassis::leftMotor1;
std::shared_ptr<CANTalon> Chassis::leftMotor2;
std::shared_ptr<CANTalon> Chassis::leftMotor3;

std::shared_ptr<CANTalon> Chassis::rightMotor1;
std::shared_ptr<CANTalon> Chassis::rightMotor2;
std::shared_ptr<CANTalon> Chassis::rightMotor3;



Chassis::Chassis() :
		Subsystem("Chassis")
{

	leftMotor1.reset(new CANTalon(1));
	leftMotor2.reset(new CANTalon(2));
	leftMotor3.reset(new CANTalon(3));

	rightMotor1.reset(new CANTalon(4));
	rightMotor2.reset(new CANTalon(5));
	rightMotor3.reset(new CANTalon(6));
}

void Chassis::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DefaultDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

