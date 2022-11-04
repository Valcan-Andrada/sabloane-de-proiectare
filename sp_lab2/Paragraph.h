#ifndef BOOK_PARAGRAPH_H
#define BOOK_PARAGRAPH_H
#include <string>
#include "Element.h"

using namespace std;

class Paragraph : public Element
{

private:
	string title;
	
public:
	void print();
	Paragraph(string title);
};

#endif