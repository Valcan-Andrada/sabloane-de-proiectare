#include "Element.h"
#include "AlignStrategy.h"


#include "Content.h"
#include <iostream>
#include <string>

#ifndef PARAGRAPH_H
#define PARAGRAPH_H
class Paragraph : public Element
{
public:
	void print() {
		std::cout << "this is a paragraph";
	}
private:
	std::string text;
	
	
	
};

#endif