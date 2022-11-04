#include "Paragraph.h"
#include <iostream>

using namespace std;

void Paragraph::print()
{
	cout << this->title;
}

Paragraph::Paragraph(string title) {

	this->title = title;
}