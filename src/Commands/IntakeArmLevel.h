#ifndef IntakeArmLevel_H
#define IntakeArmLevel_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeArmLevel: public Command
{
public:
	IntakeArmLevel(int position);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int mposition;
};

#endif
