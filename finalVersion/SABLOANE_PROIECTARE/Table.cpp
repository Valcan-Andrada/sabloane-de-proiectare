#include "Table.h"
#include "Visitor.h"
#include <iostream>
void Table::print()const 
{
	std::cout << "this is a table ";
}
void Table::Accept(Visitor* visitor) const
{
	visitor->visitTable(this);
}

Table::Table(std::string name)
{
	this->name = name;
}

std::string Table::type()
{
	return "Table";
}
