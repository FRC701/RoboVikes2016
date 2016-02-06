#ifndef AutomaticShifter_H
#define AutomaticShifter_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutomaticShifter: public CommandBase
{
public:
	AutomaticShifter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
