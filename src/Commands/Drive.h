#ifndef Drive_H
#define Drive_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Drive: public Command
{
public:
	Drive(int goal, double mspeed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int encoderValueGoal;
	double speed;
};

#endif
