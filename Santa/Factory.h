#pragma once

class Factory
{


public:
	virtual ~Factory() {};
	virtual class Gift* CreateGift() const = 0;
};