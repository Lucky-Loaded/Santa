#include "BarbieFactory.h"
#include "Barbie.h"

Gift* BarbieFactory::CreateGift() const
{
	return new Barbie();
}
