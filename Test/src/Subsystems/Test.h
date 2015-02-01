#ifndef Test_H
#define Test_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Test: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Test();
	void InitDefaultCommand();
	void RunStuff();
	CANTalon *frontleftm;
	SmartDashboard *ds;
};

#endif
