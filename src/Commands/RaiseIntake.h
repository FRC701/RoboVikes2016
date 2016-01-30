#ifndef RaiseIntake_H
#define RaiseIntake_H

#include "Portcullis.h"
#include "WPILib.h"

class RaiseIntake: public Portcullis
{
public:
	RaiseIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
