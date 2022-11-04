#ifndef BOOK_SUBCHAPTER_H
#define BOOK_SUBCHAPTER_H

#include "Element.h"
#include <vector>
#include<iostream>
#include <string>

using namespace std;

class SubChapter
{

private:
	string name;
	vector<Element> elements;
	
public:
	SubChapter(string name);
	void createNewParagraph(string paragraph);
	void createNewTable(string table);
	void createNewImage(string img);
	void print();
	
};

#endif