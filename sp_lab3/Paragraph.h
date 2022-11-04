#ifndef BOOK_PARAGRAPH_H
#define BOOK_PARAGRAPH_H
#include "Element.h"
#include <string>
class Paragraph : public Element
{
protected:
	string text;
public:
	Paragraph(string text);
	void add(Element* element){}
	void remove(Element* element){}
	Element* get(int index) { return NULL; }
};

#endif