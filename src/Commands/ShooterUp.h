#ifndef ShooterUp_H
#define ShooterUp_H

#include "../Robot.h"
#include "WPILib.h"

class ShooterUp: public Command
{
public:
	ShooterUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
