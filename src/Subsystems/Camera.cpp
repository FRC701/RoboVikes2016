#include "Camera.h"
#include "../Commands/CameraControl.h"

Camera::Camera() :
		Subsystem("Camera")
{
	Table = RobotMap::cameraTable;
}

void Camera::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new CameraControl());


}

// Put methods for controlling this subsystem
// here. Call these from Commands.
