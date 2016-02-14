#ifndef SetShooter_H
#define SetShooter_H

#include "../RobotMap.h"
#include "WPILib.h"

class SetShooter: public Command
{
public:
	SetShooter(char set);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	char mset;
};

#endif
