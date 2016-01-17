// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::chassisleftMotor1;
std::shared_ptr<CANTalon> RobotMap::chassisleftMotor2;
std::shared_ptr<CANTalon> RobotMap::chassisleftMotor3;
std::shared_ptr<CANTalon> RobotMap::chassisrightMotor1;
std::shared_ptr<CANTalon> RobotMap::chassisrightMotor2;
std::shared_ptr<CANTalon> RobotMap::chassisrightMotor3;
std::shared_ptr<DoubleSolenoid> RobotMap::chassisshiftLeft;
std::shared_ptr<DoubleSolenoid> RobotMap::chassisshiftRight;
std::shared_ptr<CANTalon> RobotMap::intakeintakeMotor1;
std::shared_ptr<CANTalon> RobotMap::intakeintakeMotor2;
std::shared_ptr<CANTalon> RobotMap::intakeintakeMotor3;
std::shared_ptr<CANTalon> RobotMap::intakeintakeMotor4;
std::shared_ptr<CANTalon> RobotMap::shootershooterMotor1;
std::shared_ptr<CANTalon> RobotMap::shootershooterMotor2;
std::shared_ptr<CANTalon> RobotMap::shootershooterMotor3;
std::shared_ptr<DoubleSolenoid> RobotMap::shooterlift1;
std::shared_ptr<DoubleSolenoid> RobotMap::shooterlift2;


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    chassisleftMotor1.reset(new CANTalon(1));
    lw->AddActuator("Chassis", "leftMotor1", chassisleftMotor1);
    
    chassisleftMotor2.reset(new CANTalon(2));
    lw->AddActuator("Chassis", "leftMotor2", chassisleftMotor2);
    
    chassisleftMotor3.reset(new CANTalon(3));
    lw->AddActuator("Chassis", "leftMotor3", chassisleftMotor3);
    
    chassisrightMotor1.reset(new CANTalon(4));
    lw->AddActuator("Chassis", "rightMotor1", chassisrightMotor1);
    
    chassisrightMotor2.reset(new CANTalon(5));
    lw->AddActuator("Chassis", "rightMotor2", chassisrightMotor2);
    
    chassisrightMotor3.reset(new CANTalon(6));
    lw->AddActuator("Chassis", "rightMotor3", chassisrightMotor3);
    
    chassisshiftLeft.reset(new DoubleSolenoid(0, 0, 7));
    lw->AddActuator("Chassis", "shiftLeft", chassisshiftLeft);
    
    chassisshiftRight.reset(new DoubleSolenoid(0, 1, 6));
    lw->AddActuator("Chassis", "shiftRight", chassisshiftRight);
    
    intakeintakeMotor1.reset(new CANTalon(7));
    lw->AddActuator("Intake", "intakeMotor1", intakeintakeMotor1);
    
    intakeintakeMotor2.reset(new CANTalon(8));
    lw->AddActuator("Intake", "intakeMotor2", intakeintakeMotor2);
    
    intakeintakeMotor3.reset(new CANTalon(9));
    lw->AddActuator("Intake", "intakeMotor3", intakeintakeMotor3);
    
    intakeintakeMotor4.reset(new CANTalon(10));
    lw->AddActuator("Intake", "intakeMotor4", intakeintakeMotor4);
    
    shootershooterMotor1.reset(new CANTalon(0));
    lw->AddActuator("Shooter", "shooterMotor1", shootershooterMotor1);
    
    shootershooterMotor2.reset(new CANTalon(11));
    lw->AddActuator("Shooter", "shooterMotor2", shootershooterMotor2);
    
    shootershooterMotor3.reset(new CANTalon(12));
    lw->AddActuator("Shooter", "shooterMotor3", shootershooterMotor3);
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
