#include <iostream>
#include "Link.h"

Link::Link(int data) {
    this->data = data;
}

void Link::Display() {
    std::cout << data << std::endl;
}