#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"
//#include "Commands/AutonomousCommand.h"
#include "Commands/DefaultDrive.h"

OI::OI()
{
	// Process operator interface input here.
	  driver.reset(new Joystick(0));

}

std::shared_ptr<Joystick> OI::getdriver() {
   return driver;
}
