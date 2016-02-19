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
std::shared_ptr<CANTalon> RobotMap::chassisLeftMotor1;
std::shared_ptr<CANTalon> RobotMap::chassisLeftMotor2;
std::shared_ptr<CANTalon> RobotMap::chassisLeftMotor3;
std::shared_ptr<CANTalon> RobotMap::chassisRightMotor1;
std::shared_ptr<CANTalon> RobotMap::chassisRightMotor2;
std::shared_ptr<CANTalon> RobotMap::chassisRightMotor3;
std::shared_ptr<DoubleSolenoid> RobotMap::chassisDriveShifter;
std::shared_ptr<CANTalon> RobotMap::intakeIntakeMotor1;
std::shared_ptr<CANTalon> RobotMap::intakeIntakeMotor2;
std::shared_ptr<CANTalon> RobotMap::shooterShooterMotor1;
std::shared_ptr<CANTalon> RobotMap::shooterShooterMotor2;
std::shared_ptr<CANTalon> RobotMap::shooterRollerMotor;
std::shared_ptr<DoubleSolenoid> RobotMap::shooterLiftSolenoid;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    chassisLeftMotor1.reset(new CANTalon(0));
    lw->AddActuator("Chassis", "LeftMotor1", chassisLeftMotor1);
    
    chassisLeftMotor2.reset(new CANTalon(0));
    lw->AddActuator("Chassis", "LeftMotor2", chassisLeftMotor2);
    
    chassisLeftMotor3.reset(new CANTalon(0));
    lw->AddActuator("Chassis", "LeftMotor3", chassisLeftMotor3);
    
    chassisRightMotor1.reset(new CANTalon(0));
    lw->AddActuator("Chassis", "RightMotor1", chassisRightMotor1);
    
    chassisRightMotor2.reset(new CANTalon(0));
    lw->AddActuator("Chassis", "RightMotor2", chassisRightMotor2);
    
    chassisRightMotor3.reset(new CANTalon(0));
    lw->AddActuator("Chassis", "RightMotor3", chassisRightMotor3);
    
    chassisDriveShifter.reset(new DoubleSolenoid(0, 0, 7));
    lw->AddActuator("Chassis", "DriveShifter", chassisDriveShifter);
    
    intakeIntakeMotor1.reset(new CANTalon(9));
    lw->AddActuator("Intake", "IntakeMotor1", intakeIntakeMotor1);
    
    intakeIntakeMotor2.reset(new CANTalon(10));
    lw->AddActuator("Intake", "IntakeMotor2", intakeIntakeMotor2);
    
    shooterShooterMotor1.reset(new CANTalon(0));
    lw->AddActuator("Shooter", "ShooterMotor1", shooterShooterMotor1);
    
    shooterShooterMotor2.reset(new CANTalon(0));
    lw->AddActuator("Shooter", "ShooterMotor2", shooterShooterMotor2);
    
    shooterRollerMotor.reset(new CANTalon(0));
    lw->AddActuator("Shooter", "RollerMotor", shooterRollerMotor);
    
    shooterLiftSolenoid.reset(new DoubleSolenoid(0, 2, 3));
    lw->AddActuator("Shooter", "LiftSolenoid", shooterLiftSolenoid);
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
