#include "Paragraph.h"
#include <iostream>
#include  "Visitor.h"
void Paragraph::print() const
{
	
		std::cout << "this is a paragraph";
	
}

void Paragraph::Accept(Visitor* visitor) const
{
	visitor->visitParagraph(this);
}

Paragraph::Paragraph(std::string name)
{
	this->text = name;
}

std::string Paragraph::type()
{
	return "Paragraph";
}
