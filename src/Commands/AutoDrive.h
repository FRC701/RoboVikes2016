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
		Distance_Shoot
	};
	AutoDrive(double distance);
	AutoDrive(Distance distance);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Distance mdistance;
	double testdistance;
};

#endif
