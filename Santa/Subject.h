#pragma once
#include "Observer.h"

class Subject
{
public:

	virtual string GetGiftName() const = 0;

	virtual void Push(Observer* observer) = 0;

	virtual void Remove(Observer* observer) = 0;

};

