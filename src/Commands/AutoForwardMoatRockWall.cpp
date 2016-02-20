#include <Commands/AutoForwardMoatRockWall.h>
#include "LiftShooterToggle.h"
#include "PrepShooter.h"
#include "RollerOn.h"
//#include "PIDDrive.h"
AutoForwardMoatRockWall::AutoForwardMoatRockWall()
{

	 AddSequential(new LiftShooterToggle());
	// AddSequential(new PIDDrive(6000);
	 AddParallel(new PrepShooter(0)); //put shooterspeed for this variable
	 AddParallel(new RollerOn(0)); //put rollerspeed here












	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

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
