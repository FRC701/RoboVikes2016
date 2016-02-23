#ifndef TestArms_H
#define TestArms_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TestArms: public Command
{
public:
	TestArms();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
