#ifndef lightsDefault_H
#define lightsDefault_H

#include "../RobotMap.h"
#include "WPILib.h"

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
