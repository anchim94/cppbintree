#include "pch.h"
#include "Node.h"
#include <iostream>


Node::Node()
{
}


Node::~Node()
{
	if(first!=nullptr)delete first; 
	if(second!=nullptr)delete second;
}


void Node::squeezin(Node* ptr)
{
	if (ptr->height() <= this->height())
	{
		if (first != nullptr)
		{
			first->squeezin(ptr);
		}
		else
		{
			first = ptr;
		}
	}
	else
	{
		if (second != nullptr)
		{
			second->squeezin(ptr);
		}
		else
		{
			second = ptr;
		}
	}
}

void Node::print()
{
	Pr(0);
}



void Node::Pr(int l)
{
	if (first != nullptr) first->Pr(l+1);
	for (int i = 0; i < l; i++)printf(" ");
	printMe();
	printf(": %d cm\n", height());
	if (second != nullptr)second->Pr(l+1);
}
