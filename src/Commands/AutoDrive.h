#ifndef AutoDrive_H
#define AutoDrive_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoDrive: public Command
{
public:
	AutoDrive(double distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double mdistance;
};

#endif
