#ifndef PIDdrive_H
#define PIDdrive_H

#include "Commands/PIDSubsystem.h"


class PIDdrive: public PIDSubsystem
{
public:

	PIDdrive();


	void InitDefaultCommand();
private:

protected:
	double ReturnPIDInput();
	void UsePIDOutput(double output);
};

#endif
