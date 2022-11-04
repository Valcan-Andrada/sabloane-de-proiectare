#ifndef BOOK_BOOK_H
#define BOOK_BOOK_H
#include <list>
#include "Author.h"
#include "Section.h"
#include <string>
#include "Element.h"
class Book : public Section
{
protected:
	
	list<Author*> authors;
public:
	Book(string title);
	void addAuthor(Author* author);
	void addContent(Element* paragraph);
};

#endif