#pragma once
#include "Subject.h"
#include "MagicBoard.h"
#include <iterator>
#include <vector>

class MagicBoard : public Subject
{

protected:

	MagicBoard();
private:

	vector<Observer*> observers;

	MagicBoard* Board = nullptr;

public:

	void Register(Observer* ObserverIn) override;

	void NotifyObservers() override;

};

