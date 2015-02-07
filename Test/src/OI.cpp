#include "OI.h"
#include "RobotMap.h"
#include "Commands/RunTest.h"

OI::OI()
{
	driveStick = new Joystick(ch_DriveStick);

	// Process operator interface input here.

	//set the buttons to commands

}
Joystick * OI::GetDriveJoystick()
{
	return driveStick;
}
