#ifndef RobotTurn_H
#define RobotTurn_H


#include "WPILib.h"
#include "RobotMap.h"
class RobotTurn: public Command
{
public:
	RobotTurn();
	RobotTurn(double time, double speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double m_time;
	double m_speed;
};

#endif
