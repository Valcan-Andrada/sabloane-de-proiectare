#ifndef BOOK_ELEMENT_H
#define BOOK_ELEMENT_H
#include <iostream>
using namespace std;
class Element
{
public:
	virtual void print() {
		cout << "This is an element."<<endl;
	 }
	
};

#endif