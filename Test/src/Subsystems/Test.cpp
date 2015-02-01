#include "Test.h"
#include "../RobotMap.h"

Test::Test() :
		Subsystem("Test")
{
	frontleftm = new CANTalon(ch_FrontLeftM);
	frontrightm = new CANTalon(ch_FrontRightM);
}

void Test::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//ds = new SmartDashboard();

}

void Test::RunStuff(){
	ds->init();
	frontleftm ->Set(127);
	int leftFrontEncPinA = frontleftm -> GetPinStateQuadA();
	ds->PutNumber("Enc Value", leftFrontEncPinA);
}
void Test::Correction(){
	ds->init();
	frontrightm ->Set(127);
	int rightFrontEncPinA = frontrightm -> GetPinStateQuadA();
	ds->PutNumber("Enc Value", rightFrontEncPinA);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
