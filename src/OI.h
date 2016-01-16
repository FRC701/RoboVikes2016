// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<Joystick> coDriver;
	std::shared_ptr<JoystickButton> coButtonR3;
	std::shared_ptr<JoystickButton> coButtonL3;
	std::shared_ptr<JoystickButton> coButtonStart;
	std::shared_ptr<JoystickButton> coButtonBack;
	std::shared_ptr<JoystickButton> coButtonRB;
	std::shared_ptr<JoystickButton> coButtonLB;
	std::shared_ptr<JoystickButton> coButtonY;
	std::shared_ptr<JoystickButton> coButtonX;
	std::shared_ptr<JoystickButton> coButtonB;
	std::shared_ptr<JoystickButton> coButtonA;
	std::shared_ptr<Joystick> driver;
	std::shared_ptr<JoystickButton> dButtonR3;
	std::shared_ptr<JoystickButton> dButtonL3;
	std::shared_ptr<JoystickButton> dButtonStart;
	std::shared_ptr<JoystickButton> dButtonBack;
	std::shared_ptr<JoystickButton> dButtonRB;
	std::shared_ptr<JoystickButton> dButtonLB;
	std::shared_ptr<JoystickButton> dButtonY;
	std::shared_ptr<JoystickButton> dButtonX;
	std::shared_ptr<JoystickButton> dButtonB;
	std::shared_ptr<JoystickButton> dButtonA;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getdriver();
	std::shared_ptr<Joystick> getcoDriver();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
