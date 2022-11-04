#ifndef BOOK_BOOK_H
#define BOOK_BOOK_H

#include <iostream>
#include <string>
#include "TableOfContent.h"
#include "Author.h"
#include "Chapter.h"

using namespace std;

class Book
{
         
private:             
    string title;
    TableOfContent toc;
    vector<Chapter> chapters;
    vector<Author> authors;

public:
    void print();
    Book(string title);
    void addAuthor(Author& author);
    void addChapter(Chapter& chapter);
    void addTableOfContent(TableOfContent tableOfContent);
    int createChapter(string chapter);
    Chapter getChapter(int index);
};

#endif