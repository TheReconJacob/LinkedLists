#include "LinkedList.h"

LinkedList::LinkedList() {
	first = 0;
}
bool LinkedList::IsEmpty() {
	return (first == 0);
}
void LinkedList::Insert(Link* newLink) {
	newLink->next = first;
	first = newLink;
}
void LinkedList::Display() {
	Link* current = first;
	while (current != 0) {
		current->Display();
		current = current->next;
	}
}
Link* LinkedList::Find(int key) {
	Link* current = first;
	while (current->data != key) {
		if (current->next == 0) {
			return 0;
		}
		else {
			current = current->next;
		}
	}
	return current;
}

Link* LinkedList::Delete(int key) {
	Link* current = first;
	Link* previous = first;
	while (current->data != key) {
		if (current->next == 0) {
			return 0;
		}
		else {
			previous = current;
			current = current->next;
		}
	}
	if (current == first) {
		first = first->next;
	}
	else {
		previous->next = current->next;
	}
	return current;
}

Link* LinkedList::DeleteFirst() {
	if (first == 0) {
		return 0;
	}
	Link* temp = first;
	first = first->next;
	return temp;
}