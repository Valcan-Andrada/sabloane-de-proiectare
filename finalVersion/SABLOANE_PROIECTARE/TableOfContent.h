#include "Element.h"
#include <iostream>
#ifndef TABLE_OF_CONTENT_H
#define TABLE_OF_CONTENT_H
class TableOfContent :public Element
{
public:
	void print() const;
	void Accept(Visitor* visitor) const override;
};

#endif