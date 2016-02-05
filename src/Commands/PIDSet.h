#ifndef PIDSET_H
#define PIDSET_H
#include "Timer.h"
#include "Commands/Subsystem.h"
#include "../Robot.h"

class PIDSet: public Command {
public :

	PIDSet();
	PIDSet(double setPoint);
	PIDSet(double setPoint, double delay);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double m_setPoint;
	Timer timer;
	double m_delay;
};

#endif
