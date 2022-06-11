#pragma once
#include <iostream>
using namespace std;

class Observer
{

public:

	virtual void Update(class Subject* subject) = 0;

	virtual void Notify() = 0;
};

