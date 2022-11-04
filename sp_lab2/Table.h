#ifndef BOOK_TABLE_H
#define BOOK_TABLE_H

#include "Element.h"
#include <string>
#include <iostream>

using namespace std;

class Table : public Element {

private :
	string title;
	
public:
	void print();
	Table(string title);
};

#endif