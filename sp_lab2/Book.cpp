#include "Book.h"
#include "Author.h"
#include "Chapter.h"
#include <iostream>
using namespace std;

Book::Book(string title) {
	this->title = title;
}
void Book::print() {
	cout << this->title;
}
void Book::addAuthor(Author& author) {
	
	authors.push_back(author);
	
}

void Book::addChapter(Chapter& chapter)
{
	chapters.push_back(chapter);
}

void Book::addTableOfContent(TableOfContent tableOfContent)
{
	this->toc = tableOfContent;
}

int Book::createChapter(string chapter)
{
	Chapter c{ chapter };
	chapters.push_back(c);
	return chapters.size() - 1;
	
}

Chapter Book::getChapter(int index)
{
	return chapters.at(index);
}
