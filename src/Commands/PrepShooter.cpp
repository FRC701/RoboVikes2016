#include "PrepShooter.h"
#include "ShooterControl.h"
#include "IntakeDown.h"
#include "ShooterUp.h"

PrepShooter::PrepShooter()
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	AddSequential(new ShooterControl(0.5));	//placeholder
	AddParallel(new IntakeDown());
	AddSequential(new ShooterUp());			//still needs to be made





		/*	while (Robot::oi->dButtonStart->Get() =! true)
		{
			std::cout << "waiting...";
		}
		AddSequential(new RollerOn());	*/
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
