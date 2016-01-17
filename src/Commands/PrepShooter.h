#ifndef PrepShooter_H
#define PrepShooter_H

#include "../RobotMap.h"
#include "WPILib.h"

class PrepShooter: public RobotMap
{
public:
	PrepShooter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:

};

#endif
