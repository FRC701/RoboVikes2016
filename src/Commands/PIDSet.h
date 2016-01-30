#ifndef PIDSET_H
#define PIDSET_H
#include "Timer.h"
#include "Commands/Subsystem.h"
#include "../Robot.h"

class PIDSet: public Command {
public :
	PIDSet(double Set, double tolerance, double delay);
	PIDSet(double Set, double tolerance);
	PIDSet(double Set);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double setPoint;
	double mtolerance;
	Timer timer;
	double mdelay;
};

#endif
