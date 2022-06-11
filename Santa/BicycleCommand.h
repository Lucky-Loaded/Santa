#pragma once
#include "Command.h"
#include <string>

using namespace std;

class BicycleCommand : public Command
{
private:
	string CommandText;

public:

	BicycleCommand(string SomthingToSay);

	void Execute() const override;
};

