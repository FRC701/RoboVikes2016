// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Commands/IntakeArmOn.h"
#include "Commands/IntakeOn.h"
#include "Commands/ToggleShooter.h"
#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/RollerOff.h"
#include "Commands/RollerOn.h"
#include "Commands/ShifterToggle.h"
#include "Commands/ShooterControl.h"
#include "Commands/TankDrive.h"
#include "Commands/IntakeOn.h"
#include "Commands/IntakeArmOn.h"
#include "Commands/IntakeArmLevel.h"
#include "Commands/DefaultIntake.h"
#include "Commands/FullIntake.h"
#include "Commands/LiftShooterToggle.h"
#include "Commands/BallIntake.h"
#include "Commands/PrepShooter.h"
#include "Commands/DefaultShooter.h"
#include "Commands/BrakeModeToggle.h"
#include "Commands/LowGoalShoot.h"
#include "Commands/PopBall.h"
#include "Commands/KickstandToggle.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    coDriver.reset(new Joystick(1));

    SmartDashboard::PutString("Co-Driver", "CoDriver");



    /*if(SmartDashboard::GetString("Co-Driver","CoDriver") == "Fish")
    {
		coButtonR3.reset(new JoystickButton(coDriver.get(), 10));
		coButtonR3->WhileHeld(new AutonomousCommand());
		coButtonL3.reset(new JoystickButton(coDriver.get(), 9));
		coButtonL3->WhileHeld(new AutonomousCommand());
		coButtonStart.reset(new JoystickButton(coDriver.get(), 8));
		coButtonStart->WhileHeld(new AutonomousCommand());
		coButtonBack.reset(new JoystickButton(coDriver.get(), 7));
		coButtonBack->WhileHeld(new AutonomousCommand());
		coButtonRB.reset(new JoystickButton(coDriver.get(), 6));
		coButtonRB->WhileHeld(new AutonomousCommand());
		coButtonLB.reset(new JoystickButton(coDriver.get(), 5));
		coButtonLB->WhileHeld(new AutonomousCommand());
		coButtonY.reset(new JoystickButton(coDriver.get(), 4));
		coButtonY->WhileHeld(new AutonomousCommand());
		coButtonX.reset(new JoystickButton(coDriver.get(), 3));
		coButtonX->WhileHeld(new AutonomousCommand());
		coButtonB.reset(new JoystickButton(coDriver.get(), 2));
		coButtonB->WhileHeld(new AutonomousCommand());
		coButtonA.reset(new JoystickButton(coDriver.get(), 1));
		coButtonA->WhileHeld(new LiftShooterToggle());
    }
    else if (SmartDashboard::GetString("Co-Driver","CoDriver") == "Edesiri")
    {
    	coButtonR3.reset(new JoystickButton(coDriver.get(), 10));
    	coButtonR3->WhileHeld(new AutonomousCommand());
		coButtonL3.reset(new JoystickButton(coDriver.get(), 9));
		coButtonL3->WhileHeld(new AutonomousCommand());
		coButtonStart.reset(new JoystickButton(coDriver.get(), 8));
		coButtonStart->WhileHeld(new AutonomousCommand());
		coButtonBack.reset(new JoystickButton(coDriver.get(), 7));
		coButtonBack->WhileHeld(new AutonomousCommand());
		coButtonRB.reset(new JoystickButton(coDriver.get(), 6));
		coButtonRB->WhileHeld(new IntakeArmOn(1.0));
		coButtonLB.reset(new JoystickButton(coDriver.get(), 5));
		coButtonLB->WhileHeld(new IntakeArmOn(-1.0));
		coButtonY.reset(new JoystickButton(coDriver.get(), 4));
		coButtonY->WhileHeld(new AutonomousCommand());
		coButtonX.reset(new JoystickButton(coDriver.get(), 3));
		coButtonX->WhileHeld(new AutonomousCommand());
		coButtonB.reset(new JoystickButton(coDriver.get(), 2));
		coButtonB->WhileHeld(new AutonomousCommand());
		coButtonA.reset(new JoystickButton(coDriver.get(), 1));
		coButtonA->WhileHeld(new LiftShooterToggle());
    }
    else
    {
    if(count == 1)
    {
    	count++;
    }*/
		coButtonR3.reset(new JoystickButton(coDriver.get(), 10));
		coButtonR3->WhenPressed(new LowGoalShoot());

		coButtonL3.reset(new JoystickButton(coDriver.get(), 9));
		coButtonL3->WhenPressed(new DefaultShooter());

		coButtonStart.reset(new JoystickButton(coDriver.get(), 8));
		coButtonStart->WhileHeld(new RollerOn(1.0));

		coButtonBack.reset(new JoystickButton(coDriver.get(), 7));
		coButtonBack->WhenPressed(new PopBall());

		coButtonRB.reset(new JoystickButton(coDriver.get(), 6));
		coButtonRB->WhenPressed(new IntakeArmLevel(IntakeArmLevel::ArmLevelPosition_Intake));

		coButtonLB.reset(new JoystickButton(coDriver.get(), 5));
		coButtonLB->WhileHeld(new IntakeArmOn(-0.3));

		coButtonY.reset(new JoystickButton(coDriver.get(), 4));
		coButtonY->WhenPressed(new PrepShooter());

		coButtonX.reset(new JoystickButton(coDriver.get(), 3));
		coButtonX->WhenPressed(new BallIntake(1.0));

		coButtonB.reset(new JoystickButton(coDriver.get(), 2));
		coButtonB->WhileHeld(new FullIntake(-1.0, -1.0));

		coButtonA.reset(new JoystickButton(coDriver.get(), 1));
		coButtonA->WhenPressed(new LiftShooterToggle());
    //}

    driver.reset(new Joystick(0));

    dButtonR3.reset(new JoystickButton(driver.get(), 10));
    dButtonR3->WhenPressed(new BrakeModeToggle());
    dButtonL3.reset(new JoystickButton(driver.get(), 9));
    dButtonL3->WhenPressed(new ShifterToggle());
    dButtonStart.reset(new JoystickButton(driver.get(), 8));
    dButtonStart->WhileHeld(new AutonomousCommand());
    dButtonBack.reset(new JoystickButton(driver.get(), 7));
    dButtonBack->WhileHeld(new AutonomousCommand());
    dButtonRB.reset(new JoystickButton(driver.get(), 6));
    dButtonRB->WhileHeld(new IntakeArmOn(1.0));
    dButtonLB.reset(new JoystickButton(driver.get(), 5));
    dButtonLB->WhileHeld(new IntakeArmOn(-1.0));
    dButtonY.reset(new JoystickButton(driver.get(), 4));
    dButtonY->WhileHeld(new AutonomousCommand());
    dButtonX.reset(new JoystickButton(driver.get(), 3));
    dButtonX->WhileHeld(new AutonomousCommand());
    dButtonB.reset(new JoystickButton(driver.get(), 2));
    dButtonB->WhileHeld(new KickstandToggle());
    dButtonA.reset(new JoystickButton(driver.get(), 1));
    dButtonA->WhenPressed(new AutonomousCommand());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getdriver() {
   return driver;
}

std::shared_ptr<Joystick> OI::getcoDriver() {
   return coDriver;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
