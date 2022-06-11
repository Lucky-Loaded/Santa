#include "Santa.h"

Santa::Santa()
{
}

void Santa::AddGiftInBag(Gift* gift)
{
	Gifts.push_back(gift);
}
