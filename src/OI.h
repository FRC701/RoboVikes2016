#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	std::shared_ptr<Joystick> driver;
public:
	OI();
	std::shared_ptr<Joystick> getdriver();
};

#endif
