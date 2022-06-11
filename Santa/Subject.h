#pragma once
#include "Observer.h"

class Subject
{
public:

	virtual string GetGiftName() const = 0;

	virtual void Register(Observer* ObserverIn) = 0;

	virtual void NotifyObservers() = 0;
};

