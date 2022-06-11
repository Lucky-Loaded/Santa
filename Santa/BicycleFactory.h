#pragma once
#include "Factory.h"
#include "Bicycle.h"

class BicycleFactory : Factory
{
private:

	Gift* CreateGift() const override;

};

