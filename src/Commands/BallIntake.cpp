#include "BallIntake.h"
#include "IntakeArmLevel.h"
#include "FullIntake.h"
#include "SetShooter.h"

BallIntake::BallIntake(double speed)
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.
	AddSequential(new IntakeArmLevel()); //TODO this command this needs to be made (this needs to be at level 2)
	AddSequential(new SetShooter('r'));
	AddSequential(new FullIntake(speed, 1.0));
	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
