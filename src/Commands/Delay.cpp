#include "Delay.h"

//LOKI

Delay::Delay(double delayTime)
: mDelayTime(delayTime)
, mTimer()
{

}

// Called just before this Command runs the first time
void Delay::Initialize()
{
	mTimer.Start();
}

// Called repeatedly when this Command is scheduled to run
void Delay::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool Delay::IsFinished()
{
	return mTimer.HasPeriodPassed(mDelayTime);
}

// Called once after isFinished returns true
void Delay::End()
{
	mTimer.Stop();
	mTimer.Reset();

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Delay::Interrupted()
{
	mTimer.Stop();
	mTimer.Reset();
}
