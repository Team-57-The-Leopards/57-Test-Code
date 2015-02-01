#include "Test.h"
#include "../RobotMap.h"

Test::Test() :
		Subsystem("Test")
{
	frontleftm = new CANTalon(ch_FrontLeftM);
}

void Test::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	frontleftm ->Set(-127);	//256 pulses per revolution
	ds = new SmartDashboard();

}

void Test::RunStuff(){
	ds->init();
	frontleftm ->Set(127);
	int leftFrontEncPinA = frontleftm -> GetPinStateQuadA();
	ds->PutNumber("Enc Value", leftFrontEncPinA);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
