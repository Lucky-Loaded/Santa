#pragma once
#include <iostream>;

using namespace std;

class Gift
{
public:

	virtual ~Gift() {};
	virtual string GetName() const = 0;

};

