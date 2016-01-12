#ifndef EXAMPLE_COMMAND_H
#define EXAMPLE_COMMAND_H

#include "../CommandBase.h"
#include "WPILib.h"

class DefaultDrive: public CommandBase
{
public:
	DefaultDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
