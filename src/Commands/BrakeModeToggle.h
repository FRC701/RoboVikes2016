#ifndef BrakeModeToggle_H
#define BrakeModeToggle_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class BrakeModeToggle: public Command
{
public:
	BrakeModeToggle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
