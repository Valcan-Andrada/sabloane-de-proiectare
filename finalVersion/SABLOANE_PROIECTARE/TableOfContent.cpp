#include "TableOfContent.h"
#include <iostream>
#include "Visitor.h"
void TableOfContent::print() const
{
	
		std::cout << "this is a table of content";
	
}

void TableOfContent::Accept(Visitor* visitor) const
{
	visitor->visitTableOfContents(this);
}
