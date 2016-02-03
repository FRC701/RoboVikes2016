#ifndef PIDIntake_H
#define PIDIntake_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class PIDIntake: public PIDSubsystem
{
public:
	PIDIntake();
	void InitDefaultCommand();

protected:
	double ReturnPIDInput();
	void UsePIDOutput(double output);
};
#endif
