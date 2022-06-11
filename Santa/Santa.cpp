#include "Santa.h"

Santa::Santa()
{
	command = new Command();
}

void Santa::AddGiftInBag(Gift* gift)
{
	Gifts.push_back(gift);
}
