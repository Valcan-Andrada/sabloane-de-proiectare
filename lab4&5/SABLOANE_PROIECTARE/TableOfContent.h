#include "Element.h"
#include <iostream>
#ifndef TABLE_OF_CONTENT_H
#define TABLE_OF_CONTENT_H
class TableOfContent :public Element
{
public:
	void print() {
		std::cout << "this is a table of content";
	}
};

#endif