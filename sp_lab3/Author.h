#ifndef BOOK_AUTHOR_H
#define BOOK_AUTHOR_H
#include <iostream>
#include <string>
using namespace std;
class Author
{
protected:
	string name;
	string surname;
public:
	void print();
	Author(string name);
};

#endif