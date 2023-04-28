#pragma once
#include "Link.h"
class LinkedList
{
public:
	Link* first;

	Link* Delete(int key);
	void Display();
	Link* Find(int key);
	void Insert(Link* newLink);
	bool IsEmpty();
	LinkedList();
};

