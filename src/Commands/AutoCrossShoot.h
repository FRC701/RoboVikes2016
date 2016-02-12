#ifndef AutoCrossShoot_H
#define AutoCrossShoot_H

#include "Commands/CommandGroup.h"
#include "WPILib.h"

class AutoCrossShoot: public CommandGroup
{
public:
	AutoCrossShoot(double msetpoint, double mturnangle, double mshootdistance);
};

#endif
