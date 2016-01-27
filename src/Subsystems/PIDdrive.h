#ifndef PIDdrive_H
#define PIDdrive_H

#include "Commands/PIDSubsystem.h"


class PIDdrive: public PIDSubsystem
{
public:
	PIDdrive();

	void InitDefaultCommand();

protected:
	double ReturnPIDInput();
	void UsePIDOutput(double output);
};

#endif
