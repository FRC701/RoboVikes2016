#include "CameraControl.h"
#include "../Subsystems/Camera.h"

CameraControl::CameraControl()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::camera.get());

	table = NetworkTable::GetTable("GRIP/myContoursReport");
}

// Called just before this Command runs the first time
void CameraControl::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void CameraControl::Execute()
{
	std::vector<double> arr = table->GetNumberArray("area", llvm::ArrayRef<double>());
	SmartDashboard::PutNumber("Area" , arr[0]);

	std::vector<double> arx = table->GetNumberArray("centerX", llvm::ArrayRef<double>());
	for (unsigned int x = 0; x < arx.size();
			x++)
	{
		SmartDashboard::PutNumber("Center X" , arx[x]);
	}

	std::vector<double> ary = table->GetNumberArray("centerY", llvm::ArrayRef<double>());
	for (unsigned int y = 0; y < ary.size();
			y++)
	{
		SmartDashboard::PutNumber("Center Y" , ary[y]);
	}

	//calculations for area->distance->rpm here. then call in PrepShoot.cpp

	double xLeftBound = 100;	double xRightBound = 200;
	double yLowerBound = 100;	double yUpperBound = 200;

	if((xLeftBound < arx[0])
			&& (arx[0] < xRightBound)
			&& (yLowerBound < ary[0])
			&& (ary[0]< yUpperBound))
	{

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
