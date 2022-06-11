#include "BicycleFactory.h"
#include "Bicycle.h"

Gift* BicycleFactory::CreateGift() const
{
	return new Bicycle();
}
