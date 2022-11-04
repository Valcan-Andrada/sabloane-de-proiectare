#include "Book.h"
#include <list>
Book::Book(string title):Section(title)
{
	
}

void Book::addAuthor(Author* author)
{
	authors.push_back(author);
}

void Book::addContent(Element* paragraph)
{
}
