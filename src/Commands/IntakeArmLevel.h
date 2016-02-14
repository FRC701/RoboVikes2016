#ifndef IntakeArmLevel_H
#define IntakeArmLevel_H

#include "../RobotMap.h"
#include "WPILib.h"

class IntakeArmLevel: public Command
{
public:
	IntakeArmLevel();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
