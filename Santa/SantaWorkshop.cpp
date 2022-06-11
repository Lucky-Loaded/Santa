// Santa.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Santa.h"
#include "Factory.h"
#include "BarbieFactory.h"
#include "BicycleFactory.h"

int main()
{
    Santa* santa = new Santa();
    BicycleFactory* bicycleFactory = new BicycleFactory();
    BarbieFactory* barbieFactory = new BarbieFactory();

    santa->AddGiftInBag(bicycleFactory->CreateGift());
    santa->AddGiftInBag(barbieFactory->CreateGift());
}