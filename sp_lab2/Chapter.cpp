#include "Chapter.h"
#include <iostream>
#include "SubChapter.h"
using namespace std;

void Chapter::print() {
	cout << this->title;
}

int Chapter::createSubChapter(string name)
{
	SubChapter sc{ name };
	subChapters.push_back(sc);
	return subChapters.size()-1;
}

SubChapter Chapter::getSubChapter(int indexSubChapter)
{
	return subChapters.at(indexSubChapter);
}

Chapter::Chapter(string name)
{
	title = name;
}
