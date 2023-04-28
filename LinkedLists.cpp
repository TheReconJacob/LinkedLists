// LinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList list;
    list.Insert(new Link(1));
    list.Insert(new Link(2));
    list.Insert(new Link(3));

    int key = 2;
    Link* result = list.Find(key);
    if(result !=0)
        std::cout << "Data: " << result->data << " was found." << std::endl;
    else
        std::cout << "Data: " << key << " was not found." << std::endl;

    Link* deletedResult = list.Delete(key);
    if (deletedResult != 0)
        std::cout << "Data: " << deletedResult->data << " was deleted." << std::endl;
    else
        std::cout << "Data: " << key << " was not found." << std::endl;

    Link* deletedFirstResult = list.DeleteFirst();
    if (deletedFirstResult != 0)
        std::cout << "Data: " << deletedFirstResult->data << " was deleted." << std::endl;
    else
        std::cout << "Data: " << key << " was not found." << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
