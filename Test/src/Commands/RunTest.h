#ifndef RunTest_H
#define RunTest_H

#include "../CommandBase.h"
#include "WPILib.h"

class RunTest: public CommandBase
{
public:
	RunTest();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
