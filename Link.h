#pragma once
class Link
{
public:
	int data;
	Link* next;

	void Display();
	int GetData();
	Link(int data);
};

