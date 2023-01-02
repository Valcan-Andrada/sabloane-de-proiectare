#include "Section.h"
#include <iostream>
#include "Visitor.h"
void Section::print() const
{
	std::cout << "this is a section";
}

void Section::Accept(Visitor* visitor) const
{
	visitor->visitSection(this);
}

void Section::addElement(Element* element)
{
	this->children.push_back(element);
}

void Section::remove(Element* component)
{
	children.remove(component);
}

Section::Section(std::string title)
{
	this->title = title;
}
