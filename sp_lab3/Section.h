#ifndef BOOK_SECTION_H
#define BOOK_SECTION_H
#include "Element.h"
#include <string>
#include <list>
#include <iostream>
#include "Image.h"
using namespace std;
class Section : public Element
{
protected:
	string title;
	list<Element*> children;
public:
	Section(string title);
	void print()  {
		cout << "Section title:" << this->title<<endl;
		cout << "Elemente:";
		for (Element* elem : this->children) {
			cout << "=>";elem->print();
		}
	}
	void remove(Element* element) override {
		//remove element
	}
	void add(Element* element) override {
		children.push_back(element);
	}
	Element* get(int index) override{
		int i = 0;
		for (Element* elem: children) {
			if (i == index) {
				return elem;
			}
			i += 1;
		}
	}
	

};

#endif