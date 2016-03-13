#ifndef IntakeCounter_H
#define IntakeCounter_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeCounter: public Command
{
public:
	IntakeCounter(int endcounter);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int mendcounter;
	int mcounter;
};

#endif
