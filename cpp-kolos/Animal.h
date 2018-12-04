#pragma once
#include "Node.h"
class Animal :
	public Node
{
public:
	Animal(int);
	virtual ~Animal();
	virtual int height();
private:
	int H;
public:
	virtual void printMe();
};

