#pragma once
#include <iostream>

class Command
{
public:
	virtual ~Command(){}
	virtual void Execute() const = 0;
};

