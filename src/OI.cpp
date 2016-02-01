// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include <Commands/PIDSet.h>
#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/RollerOff.h"
#include "Commands/RollerOn.h"
#include "Commands/RollerReverse.h"
#include "Commands/ShifterToggle.h"
#include "Commands/ShooterControl.h"
#include "Commands/ShooterIntake.h"
#include "Commands/ShooterReverse.h"
#include "Commands/TankDrive.h"
#include "Commands/IntakeDown.h"
#include "Commands/IntakeIn.h"
#include "Commands/IntakeOut.h"
#include "Commands/IntakeUp.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    coDriver.reset(new Joystick(1));
    
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
    coButtonA->WhileHeld(new AutonomousCommand());
    driver.reset(new Joystick(0));
    
    dButtonR3.reset(new JoystickButton(driver.get(), 10));
    dButtonR3->WhileHeld(new AutonomousCommand());
    dButtonL3.reset(new JoystickButton(driver.get(), 9));
    dButtonL3->WhenReleased(new ShifterToggle());
    dButtonStart.reset(new JoystickButton(driver.get(), 8));
    dButtonStart->WhileHeld(new AutonomousCommand());
    dButtonBack.reset(new JoystickButton(driver.get(), 7));
    dButtonBack->WhileHeld(new AutonomousCommand());
    dButtonRB.reset(new JoystickButton(driver.get(), 6));
    dButtonRB->WhileHeld(new ShooterIntake());
    dButtonLB.reset(new JoystickButton(driver.get(), 5));
    //PIDSet has three parameters (encoder position, tolerance, delay)
    //only mess with tolerance and delay if you know what your doing as it might cause oscilation
    dButtonLB->WhenPressed(new PIDSet(100000.0, 2000, .00005));
    dButtonY.reset(new JoystickButton(driver.get(), 4));
    dButtonY->WhileHeld(new AutonomousCommand());
    dButtonX.reset(new JoystickButton(driver.get(), 3));
    dButtonX->WhileHeld(new RollerOn());
    dButtonB.reset(new JoystickButton(driver.get(), 2));
    dButtonB->WhileHeld(new AutonomousCommand());
    dButtonA.reset(new JoystickButton(driver.get(), 1));
    dButtonA->WhileHeld(new AutonomousCommand());

    // SmartDashboard Buttons
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    SmartDashboard::PutData("ShifterToggle", new ShifterToggle());
    SmartDashboard::PutData("ShooterControl: shooterOff", new ShooterControl(0.0));
    SmartDashboard::PutData("ShooterControl: shooter50P", new ShooterControl(0.5));
    SmartDashboard::PutData("ShooterControl: shooter55P", new ShooterControl(0.55));
    SmartDashboard::PutData("ShooterControl: shooter60P", new ShooterControl(0.6));
    SmartDashboard::PutData("ShooterControl: shooter65P", new ShooterControl(0.65));
    SmartDashboard::PutData("ShooterControl: shooter70P", new ShooterControl(0.7));
    SmartDashboard::PutData("ShooterControl: shooter75P", new ShooterControl(0.75));
    SmartDashboard::PutData("ShooterControl: shooter80P", new ShooterControl(0.8));
    SmartDashboard::PutData("ShooterControl: shooter85P", new ShooterControl(0.85));
    SmartDashboard::PutData("ShooterControl: shooter90P", new ShooterControl(0.9));
    SmartDashboard::PutData("ShooterControl: shooter95P", new ShooterControl(0.95));
    SmartDashboard::PutData("ShooterControl: shooter100P", new ShooterControl(1.0));
    SmartDashboard::PutData("ShooterControl: shooterReverse", new ShooterControl(-0.25));
    SmartDashboard::PutData("TankDrive", new TankDrive());

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
