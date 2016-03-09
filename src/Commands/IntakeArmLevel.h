#ifndef IntakeArmLevel_H
#define IntakeArmLevel_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakeArmLevel: public Command
{
public:
	enum ArmLevelPosition {
		ArmLevelPosition_Intake = 0,
		ArmLevelPosition_Portculis,
		ArmLevelPosition_Scale,
		ArmLevelPosition_LowGoal
	};
	IntakeArmLevel(ArmLevelPosition position);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	ArmLevelPosition mposition;
	int count;
};

#endif
