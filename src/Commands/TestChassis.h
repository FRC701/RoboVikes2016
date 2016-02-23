#ifndef TestChassis_H
#define TestChassis_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TestChassis: public Command
{
public:
	TestChassis();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
