#include "AutoMoat.h"
#include "AutoDrive.h"
#include "SetShifter.h"
#include "SetShooter.h"
#include "IntakeArmLevel.h"

AutoMoat::AutoMoat()
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.
	AddSequential(new SetShifter('h'));
	AddSequential(new SetShooter(DoubleSolenoid::kForward));
	AddSequential(new IntakeArmLevel(IntakeArmLevel::ArmLevelPosition_LowGoal));
	AddSequential(new AutoDrive(AutoDrive::Distance_Cross));
	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
