#ifndef PIDArmL_H
#define PIDArmL_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class PIDArmL: public PIDSubsystem
{
public:
	PIDArmL();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
