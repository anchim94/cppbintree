#pragma once
class Node
{
public:
	Node();
	virtual ~Node();
	virtual int height() = 0;
	void squeezin(Node*);
	virtual void print();
	Node* first = nullptr;
	Node* second = nullptr;
	virtual void printMe()=0;
	void Pr(int);
};

