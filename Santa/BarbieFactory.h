#pragma once
#include "Factory.h"

class BarbieFactory : public Factory
{
public:

	Gift* CreateGift() const override;
};

