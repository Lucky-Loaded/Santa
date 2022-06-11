#pragma once
#include <iostream>
#include "Gift.h"
#include <vector>

using namespace std;
class Santa
{

public:

	Santa();

	void AddGiftInBag(Gift* gift);

private:

	vector<Gift*> Gifts;
};

