#ifndef PIDintake_H
#define PIDintake_H

#include "../Robot.h"
#include "WPILib.h"

class PIDintake: public Command
{
public:
	PIDintake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
