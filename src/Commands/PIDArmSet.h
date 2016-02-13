#ifndef PIDArmSet_H
#define PIDArmSet_H

#include "../Robot.h"
#include "WPILib.h"

class PIDArmSet: public Command
{
public:
	PIDArmSet();
	PIDArmSet(double setpoint);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double m_setpoint;
};

#endif
