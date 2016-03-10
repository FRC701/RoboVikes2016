#ifndef SetDriveSpeed_H
#define SetDriveSpeed_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class SetDriveSpeed: public Command
{
public:
	SetDriveSpeed(double value , double newValue);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double mValue;
	double mNewValue;
};

#endif
