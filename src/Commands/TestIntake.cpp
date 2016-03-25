

#include "TestIntake.h"


TestIntake::TestIntake(): Command() {

	Requires(Robot::intake.get());
}


// Called just before this Command runs the first time
void TestIntake::Initialize() {
    RobotMap::sli->SetColor(ShooterLightIndicator::kGreen);
}

// Called repeatedly when this Command is scheduled to run
void TestIntake::Execute() {
    RobotMap::sli->SetColor(ShooterLightIndicator::kYellow);
}

// Make this return true when this Command no longer needs to run execute()
bool TestIntake::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void TestIntake::End() {
    RobotMap::sli->SetColor(ShooterLightIndicator::kRed);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestIntake::Interrupted() {

}
