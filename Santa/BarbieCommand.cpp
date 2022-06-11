#include "BarbieCommand.h"

BarbieCommand::BarbieCommand(string SomthingToSay)
{
	CommandText = SomthingToSay;
}

void BarbieCommand::Execute() const
{
	cout << "BarbieCommand says " << CommandText << "/n";
}
