#pragma once
#include "Link.h"
class LinkedList {
public:
	Link* first;
	LinkedList();
	bool IsEmpty();
	void Insert(Link* newLink);
	void Display();
	Link* Find(int key);
	Link* Delete(int key);
	Link* DeleteFirst();
};