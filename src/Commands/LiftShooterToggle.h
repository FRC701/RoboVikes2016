#ifndef LiftShooterToggle_H
#define LiftShooterToggle_H

#include "../RobotMap.h"
#include "WPILib.h"

class LiftShooterToggle: public Command
{
public:
	LiftShooterToggle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
