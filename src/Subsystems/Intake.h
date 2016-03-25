

#ifndef INTAKE_H
#define INTAKE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem {

private:
	std::shared_ptr<CANTalon> intakeMotor1;
	std::shared_ptr<CANTalon> intakeMotor2;
	std::shared_ptr<CANTalon> intakeMotor3;
	std::shared_ptr<CANTalon> intakeMotor4;

public:
	Intake();
	void InitDefaultCommand();

};

#endif
