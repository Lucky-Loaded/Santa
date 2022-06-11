#pragma once
#include "Factory.h"
#include "Bicycle.h"

class BicycleFactory : public Factory
{
public:

	Gift* CreateGift() const override;

};

