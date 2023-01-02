#include "Element.h"
#include <iostream>
#include <string>
#include <list>

#ifndef SECTION_H
#define SECTION_H

class Section : public Element
{
public:
	void print() const;
	void Accept(Visitor* visitor) const override;
	void addElement(Element* element) override;
	void remove(Element* component) override;
	Section(){}
	Section(std::string title);
private:
	std::string title;
	std::list<Element*> children;
};


#endif // !SECTION_H


