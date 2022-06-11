#pragma once
#include "Factory.h"

class BarbieFactory : public Factory
{
	Gift* CreateGift() const override;
};

