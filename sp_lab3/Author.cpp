#include "Author.h"
#include <iostream>
using namespace std;
void Author::print()
{
	cout << "Author: name:" << this->name << endl << "   surname:" << this->surname;
}

Author::Author(string name)
{
	this->name = name;
}
