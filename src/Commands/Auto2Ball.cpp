#include "Auto2Ball.h"
#include "SetShifter.h"
#include "AutoDrive.h"
#include "SetShooter.h"
#include "AutoTurn.h"
#include "SpeedShooterControl.h"
#include "RollerControl.h"
#include "IntakeArmLevel.h"
#include "FullIntake.h"

Auto2Ball::Auto2Ball()
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
	//Set Solenoids and Arm
	//AddSequential(new KickstandToggle());
	AddSequential(new SetShifter('l'));
	AddSequential(new IntakeArmLevel(IntakeArmLevel::ArmLevelPosition_Intake));
	AddSequential(new SetShooter(DoubleSolenoid::kReverse));

	//Drive and Turn into position
	AddSequential(new AutoDrive(AutoDrive::Distance_LowBar));
	AddSequential(new AutoTurn(AutoTurn::turnLeft,600));

	//Shoot Ball
	AddSequential(new SpeedShooterControl(6000));
	AddSequential(new RollerControl());

	//Realign and cross back
	AddSequential(new AutoTurn(AutoTurn::turnRight, 600));
	AddSequential(new AutoDrive(AutoDrive::Distance_Cross));

	//Intake Ball and drive back
	AddSequential(new FullIntake(1.0,1.0));
	AddSequential(new AutoDrive(AutoDrive::Distance_LowBar));
	AddSequential(new AutoTurn(AutoTurn::turnLeft,600));

	//Shoot
	AddSequential(new SpeedShooterControl(6000));
	AddSequential(new RollerControl());


	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
