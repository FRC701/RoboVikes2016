#ifndef AutoDrive_H
#define AutoDrive_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoDrive: public Command
{
public:
	enum Distance {
		Distance_Reach = 0,
		Distance_Cross,
		Distance_Shoot,
		Distance_LowBar,
		Distance_DoNothing,
		Distance_Cheval_Cross
	};
	AutoDrive(Distance distance);
	int getPosition(Distance distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Distance mdistance;
	int mposition;
	int counter;
	int tolerance;
};

#endif
