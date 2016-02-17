#include "CameraControl.h"
#include "../Subsystems/Camera.h"

CameraControl::CameraControl()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::camera.get());
}

// Called just before this Command runs the first time
void CameraControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void CameraControl::Execute()
{


			std::vector<double> arr = RobotMap::cameraTable->GetNumberArray("area", llvm::ArrayRef<double>());
			for (unsigned int i = 0; i < arr.size();
					i++)
			{
				SmartDashboard::PutNumber("Area" , arr[i]);
			}



}

// Make this return true when this Command no longer needs to run execute()
bool CameraControl::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void CameraControl::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CameraControl::Interrupted()
{

}
