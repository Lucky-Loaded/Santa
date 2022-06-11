#include "BicycleCommand.h"

BicycleCommand::BicycleCommand(string SomthingToSay)
{
	CommandText = SomthingToSay;
}

void BicycleCommand::Execute() const
{
	cout << "BicycleCommand says " << CommandText << "/n";
}
