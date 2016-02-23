#ifndef TestShooter_H
#define TestShooter_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class TestShooter: public Command
{
public:
	TestShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
