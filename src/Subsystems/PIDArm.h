#ifndef PIDArm_H
#define PIDArm_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class PIDArm: public PIDSubsystem
{
public:
	PIDArm();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
private:
	double correction;
	double mcorrection;
};

#endif
