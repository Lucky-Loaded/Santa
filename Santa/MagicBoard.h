#pragma once
#include "Subject.h"
#include "MagicBoard.h"
#include <iterator>
#include <list>

class MagicBoard : public Subject
{

protected:

	MagicBoard();
private:

	list<Observer*>* observers = new list<Observer*>();

	MagicBoard* Board = nullptr;

public:

	void Push(Observer* Observer) override;

	void Remove(Observer* Observer) override;

};

