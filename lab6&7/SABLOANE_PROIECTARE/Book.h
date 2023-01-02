#include "Section.h"
#include "Author.h"
#include <iostream>
#include <string>
#ifndef BOOK_H
#define BOOK_H
class Book : public Section
{
public:
	Book(std::string title) {
		this->title = title;
	}
	void addContent(Section* section) {

	}
private:
	Author* author;
	std::string title;
};
#endif
