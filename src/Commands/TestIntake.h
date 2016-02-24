#ifndef TestIntake_H
#define TestIntake_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TestIntake: public Command
{
public:
	TestIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
