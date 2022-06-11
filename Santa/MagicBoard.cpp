#include "MagicBoard.h"

MagicBoard::MagicBoard()
{
	Board = this;
}

void MagicBoard::Push(Observer* Observer)
{
	observers->push_back(Observer);
}

void MagicBoard::Remove(Observer* Observer)
{
	observers->remove(Observer);
}
