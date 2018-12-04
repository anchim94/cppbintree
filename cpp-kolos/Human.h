#pragma once
#include "Node.h"
class Human :
	public Node
{
public:
	Human();
	virtual ~Human();
	virtual int height();
	virtual void printMe();
};

