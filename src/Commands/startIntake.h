#ifndef startIntake_H
#define startIntake_H
#include <WPILib.h>
#include "../CommandBase.h"

class startIntake : public CommandBase {
public:
	startIntake();
	~startIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // startIntake_H
