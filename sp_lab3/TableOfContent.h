#ifndef BOOK_TABLEOFCONTENT_H
#define BOOK_TABLEOFCONTENT_H
#include "Element.h"
class TableOfContent : public Element
{
public:
	void add(Element* element) {}
	void remove(Element* element) {}
	Element* get(int index) {}
};

#endif