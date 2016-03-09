#ifndef RollerControl_H
#define RollerControl_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class RollerControl: public Command
{
public:
	RollerControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
