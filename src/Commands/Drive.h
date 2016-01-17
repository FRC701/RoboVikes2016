#ifndef Drive_H
#define Drive_H

#include "../RobotMap.h"
#include "WPILib.h"

class Drive: public RobotMap
{
public:
	Drive();
	Drive(int encoderVal, int encoderValGoal);
	Drive(int encoderVal, int encoderValGoal, double speedinput);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	int encoderValue;
	int encoderValueGoal;
	int speed;
	int direction;
};

#endif
