#ifndef IntakeOff_H
#define IntakeOff_H


#include "Commands/Subsystem.h"
#include "../RobotMap.h"
#include "WPILib.h"

class IntakeOff: public Command
{
public:
	IntakeOff();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
