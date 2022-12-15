#include "Element.h"
#include <iostream>
#ifndef TABLE_H
#define TABLE_H
class Table : public Element
{
public:
	void print() {
		std::cout << "this is a table ";
	}
};

#endif