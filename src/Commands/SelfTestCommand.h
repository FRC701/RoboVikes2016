#ifndef SelfTestCommand_H
#define SelfTestCommand_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class SelfTestCommand: public Command
{
public:
	SelfTestCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool isChassisGood;
	bool isIntakeGood;
	bool isArmsGood;
	bool isShooterGood;
	bool isShooterLift;
	bool ShooterLiftLeft;
	bool ShooterLiftRight;
	int Timer;
};

#endif
