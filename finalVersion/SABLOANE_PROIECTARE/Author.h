#include <string>
#include <iostream>
#ifndef AUTHOR_H
#define AUTHOR_H

class Author
{
private :
	std::string name;
public:
	Author(std::string name) {
		this->name = name;
	}
	void print() {
		std::cout << "Author's name is:" << this->name;
	}
};



#endif // !AYUTHOR_H

