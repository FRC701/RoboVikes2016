#ifndef Drive_H
#define Drive_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Drive: public Command
{
public:
	Drive(int encoderValGoal);
	Drive(int encoderValGoal, double speedinput);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int encoderValueGoal;
	int enGoal; // this is used to try ensure that we are moving from the current value
	double speed;
	int direction;
};

#endif
