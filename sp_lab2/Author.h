#ifndef BOOK_AUTHOR_H
#define BOOK_AUTHOR_H

#include <iostream>
#include <string>

using namespace std;
class Author{
private:
	string name;
public:
    
    void addAuthor(Author author);
    Author(string name);

};

#endif