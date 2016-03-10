#ifndef SetShifter_H
#define SetShifter_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class SetShifter: public Command
{
public:
	SetShifter(char speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	char mspeed;
};

#endif
