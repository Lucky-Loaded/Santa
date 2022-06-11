#include "MagicBoard.h"
#include "Observer.h"

MagicBoard::MagicBoard()
{
	Board = this;
}

void MagicBoard::Register(Observer* ObserverIn)
{
	observers.push_back(ObserverIn);
}

void MagicBoard::NotifyObservers()
{
	for (Observer* LObserver : observers)
	{
		LObserver->Notify();
	}
}
