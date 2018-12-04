#include "pch.h"
#include "Animal.h"
#include <iostream>


Animal::Animal(int H_):H(H_)
{
}


Animal::~Animal()
{
}


int Animal::height()
{
	return H;
}


void Animal::printMe()
{
	printf("ANIMAL");
}
