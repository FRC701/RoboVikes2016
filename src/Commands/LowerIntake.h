#ifndef LowerIntake_H
#define LowerIntake_H

#include "Portcullis.h"
#include "WPILib.h"

class LowerIntake: public Portcullis
{
public:
	LowerIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
