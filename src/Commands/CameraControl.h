#ifndef CameraControl_H
#define CameraControl_H

#include "../Robot.h"
#include "WPILib.h"

class CameraControl: public Command
{
public:
	CameraControl();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
