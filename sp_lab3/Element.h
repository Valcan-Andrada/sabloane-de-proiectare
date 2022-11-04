#ifndef BOOK_ELEMENT_H
#define BOOK_ELEMENT_H

#include <iostream>
using namespace std;
class Element
{
public:
	void print() {
		cout << "Element"<<endl;
	}
	virtual void add(Element* element) = 0;
	virtual void remove(Element* element) = 0;
	virtual Element* get(int index) = 0;
};

#endif