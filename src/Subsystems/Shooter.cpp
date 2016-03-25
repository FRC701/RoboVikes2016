


#include "Shooter.h"
#include "../RobotMap.h"
#include "../Commands/DefaultShooter.h"

Shooter::Shooter() : Subsystem("Shooter") {
    shooterMotor1 = RobotMap::shooterMotor1;
    shooterMotor2 = RobotMap::shooterMotor2;
    rollerMotor = RobotMap::shooterRollerMotor;
    liftSolenoid = RobotMap::shooterLiftSolenoid;

    liftSolenoid->Set(DoubleSolenoid::kReverse);

}

void Shooter::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new DefaultShooter());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

