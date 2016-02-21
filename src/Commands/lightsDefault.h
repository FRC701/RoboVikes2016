#ifndef lightsDefault_H
#define lightsDefault_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class lightsDefault: public Command
{
public:
	lightsDefault();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
