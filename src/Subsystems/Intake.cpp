

#include "Intake.h"
#include "../RobotMap.h"
#include "../Commands/DefaultIntake.h"


Intake::Intake() : Subsystem("Intake") {
    intakeMotor1 = RobotMap::intakeIntakeMotor1;
    intakeMotor2 = RobotMap::intakeIntakeMotor2;

    intakeMotor1->SetFeedbackDevice(CANTalon::CtreMagEncoder_Relative);
    intakeMotor1->SetControlMode(CANTalon::kPosition);
    intakeMotor1->Set(0);
    intakeMotor1->SelectProfileSlot(0);
    intakeMotor1->SetPID(0.02,0.0,0.0,0.0);

}

void Intake::InitDefaultCommand() {

    SetDefaultCommand(new DefaultIntake());

}



