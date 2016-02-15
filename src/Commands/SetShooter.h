#ifndef SetShooter_H
#define SetShooter_H

#include "../RobotMap.h"
#include "WPILib.h"

class SetShooter: public Command
{
public:
	SetShooter(DoubleSolenoid::Value value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	DoubleSolenoid::Value mValue;
};

#endif
