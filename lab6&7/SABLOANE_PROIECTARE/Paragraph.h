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
	void print() const;
	void Accept(Visitor* visitor) const override;
	Paragraph(std::string name);
	std::string type();
private:
	std::string text;
	
	
	
};

#endif