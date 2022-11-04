#include "Table.h"
#include <iostream>

using namespace std;

void Table::print() {
	cout << this->title;
}

Table::Table(string title) {
	this->title = title;
}