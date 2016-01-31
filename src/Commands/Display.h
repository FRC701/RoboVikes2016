#ifndef Display_H
#define Display_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Display: public Command
{
public:
	Display();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double doublesetvalue;
};

#endif
