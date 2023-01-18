#include "Element.h"
#include <iostream>
#ifndef TABLE_H
#define TABLE_H
class Table : public Element
{
public:
	void print() const;
	void Accept(Visitor* visitor) const override;
	Table(std::string name);
	std::string type();
private:
	std::string name;
};

#endif