
#include "ShooterLightIndicator.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

std::shared_ptr<CANTalon> RobotMap::chassisLeftMotor1;
std::shared_ptr<CANTalon> RobotMap::chassisLeftMotor2;
std::shared_ptr<CANTalon> RobotMap::chassisLeftMotor3;
std::shared_ptr<CANTalon> RobotMap::chassisRightMotor1;
std::shared_ptr<CANTalon> RobotMap::chassisRightMotor2;
std::shared_ptr<CANTalon> RobotMap::chassisRightMotor3;
std::shared_ptr<DoubleSolenoid> RobotMap::chassisDriveShifter;
std::shared_ptr<CANTalon> RobotMap::intakeMotor1;
std::shared_ptr<CANTalon> RobotMap::intakeMotor2;
std::shared_ptr<CANTalon> RobotMap::intakeMotor3;
std::shared_ptr<CANTalon> RobotMap::intakeMotor4;
std::shared_ptr<CANTalon> RobotMap::shooterMotor1;
std::shared_ptr<CANTalon> RobotMap::shooterMotor2;
std::shared_ptr<CANTalon> RobotMap::shooterRollerMotor;
std::shared_ptr<DoubleSolenoid> RobotMap::shooterLiftSolenoid;
std::shared_ptr<ShooterLightIndicator> RobotMap::sli;

void RobotMap::init() {
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
    
    intakeMotor1.reset(new CANTalon(12));
    lw->AddActuator("Intake", "IntakeMotor1", intakeMotor1);
    
    intakeMotor2.reset(new CANTalon(13));
    lw->AddActuator("Intake", "IntakeMotor2", intakeMotor2);

    intakeMotor3.reset(new CANTalon(13));                       //TODO Change ID
    lw->AddActuator("Intake", "IntakeMotor2", intakeMotor3);

    intakeMotor4.reset(new CANTalon(13));                       //TODO Change ID
    lw->AddActuator("Intake", "IntakeMotor2", intakeMotor4);
    
    shooterMotor1.reset(new CANTalon(1));
    lw->AddActuator("Shooter", "ShooterMotor1", shooterMotor1);
    
    shooterMotor2.reset(new CANTalon(2));
    lw->AddActuator("Shooter", "ShooterMotor2", shooterMotor2);
    
    shooterRollerMotor.reset(new CANTalon(0));
    lw->AddActuator("Shooter", "RollerMotor", shooterRollerMotor);
    
    shooterLiftSolenoid.reset(new DoubleSolenoid(0, 2, 3));
    lw->AddActuator("Shooter", "LiftSolenoid", shooterLiftSolenoid);
    
    sli.reset(new ShooterLightIndicator(0, 1, 2));

}
