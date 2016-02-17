#include "Camera.h"
#include "../Commands/CameraControl.h"

Camera::Camera() :
		Subsystem("Camera")
{
	table = NetworkTable::GetTable("GRIP/myContoursReport");
}

void Camera::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new CameraControl());


}

// Put methods for controlling this subsystem
// here. Call these from Commands.
