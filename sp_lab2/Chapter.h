#ifndef BOOK_CHAPTER_H
#define BOOK_CHAPTER_H

#include "Element.h"
#include "SubChapter.h"
#include <iostream>
#include <vector>

using namespace std;

class Chapter 
{
private:
	string title;
	vector<SubChapter> subChapters;

public:
	void print();
	int createSubChapter(string nameSubChapter);
	SubChapter getSubChapter(int indexSubChapter);
	Chapter(string name);
};

#endif