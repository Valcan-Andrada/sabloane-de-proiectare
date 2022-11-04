#ifndef BOOK_IMAGE_H
#define BOOK_IMAGE_H
#include <iostream>
#include <string>
#include "Element.h"

using namespace std;

class Image : public Element
{

private:
	string imageName;

public:
	Image(string name);
	//void print();
	void print() {

		cout << this->imageName;
	}

};

#endif