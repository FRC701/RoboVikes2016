#ifndef PIDSET_H
#define PIDSET_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class PIDSet: public Command {
public :

	PIDSet(double Set);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double setPoint;
};

#endif
