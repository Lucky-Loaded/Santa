#pragma once
#include "Command.h"
#include <string>

using namespace std;

class BarbieCommand : public Command
	{
	private:
		string CommandText;

	public:

		BarbieCommand(string SomthingToSay);

		void Execute() const override;
};

