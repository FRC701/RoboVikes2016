#ifndef KickstandToggle_H
#define KickstandToggle_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class KickstandToggle: public Command
{
public:
	KickstandToggle();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
