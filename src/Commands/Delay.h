#ifndef Delay_H
#define Delay_H

//LOKI

#include "../Robot.h"
#include "WPILib.h"

class Delay: public Command
{
public:
	Delay(double delayTime);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	double mDelayTime;
	Timer mTimer;
};

#endif
