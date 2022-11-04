#include "SubChapter.h"
#include "Paragraph.h"
#include "Image.h"
#include "Table.h"
#include <iostream>

using namespace std;

SubChapter::SubChapter(string name)
{
	this->name = name;
}

void SubChapter::createNewParagraph(string paragraph)
{
	Paragraph pr{ paragraph };
	elements.push_back(pr);

}

void SubChapter::createNewTable(string table)
{
	Table tb{table};
	elements.push_back(tb);
}

void SubChapter::createNewImage(string img)
{
	Image i(img);
	elements.push_back(i);
}

void SubChapter::print()
{
	cout << "Name:" << name << endl;
	for (auto& element : this->elements) {
		element.print();
	}
}

