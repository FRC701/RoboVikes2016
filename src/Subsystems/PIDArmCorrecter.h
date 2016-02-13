#ifndef PIDArmCorrecter_H
#define PIDArmCorrecter_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class PIDArmCorrecter: public PIDSubsystem
{
public:
	PIDArmCorrecter();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
