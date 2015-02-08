#include "Test.h"
#include "../RobotMap.h"

Test::Test() :
		Subsystem("Test")
{
	frontleftm = new CANTalon(ch_FrontLeftM);
	frontrightm = new CANTalon(ch_FrontRightM);
	backleftm = new CANTalon(ch_BackLeftM);

	backrightm =  new CANTalon(ch_BackRightM);
	drive = new RobotDrive(frontleftm, backleftm, frontrightm, backrightm);
	drive->SetSafetyEnabled(kMotorSafety);
}

void Test::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//ds = new SmartDashboard();

}

void Test::RunStuff(){
	//ds->init();
	frontleftm ->Set(1);
	frontrightm ->Set(-1);
	backrightm ->Set(-1);
	backleftm ->Set(1);
	//int leftFrontEncPinA = frontleftm -> GetPinStateQuadA();
	//ds->PutNumber("Enc Value", leftFrontEncPinA);
}
void Test::Correction(){
	ds->init();
	frontrightm ->Set(127);
	int rightFrontEncPinA = frontrightm -> GetPinStateQuadA();
	ds->PutNumber("Enc Value", rightFrontEncPinA);
}
void Test::DriveWithJoystick(Joystick *drivestick){
	drive->MecanumDrive_Polar(drivestick->GetRawAxis(0), drivestick->GetRawAxis(1), drivestick->GetRawAxis(2));
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
