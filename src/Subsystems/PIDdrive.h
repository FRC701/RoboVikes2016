#ifndef PIDdrive_H
#define PIDdrive_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class PIDdrive: public PIDSubsystem
{
public:
	PIDdrive();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
};

#endif
