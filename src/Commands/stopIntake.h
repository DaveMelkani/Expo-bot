#ifndef stopIntake_H
#define stopIntake_H
#include <WPILib.h>
#include "../CommandBase.h"

class stopIntake : public CommandBase {
public:
	stopIntake();
	~stopIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // stopIntake_H
