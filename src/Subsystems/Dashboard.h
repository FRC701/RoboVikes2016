#ifndef Dashboard_H
#define Dashboard_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Dashboard: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Dashboard();
	void InitDefaultCommand();
};

#endif
