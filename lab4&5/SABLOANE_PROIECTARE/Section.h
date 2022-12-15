#include "Element.h"
#include <iostream>
#include <string>
#include <list>

#ifndef SECTION_H
#define SECTION_H

class Section : public Element
{
public:
	void print() {
		std::cout << "this is a section";
	}

	void addElement(Element* element) override {
		this->children.push_back(element);
		
	}

	void remove(Element* component) override {
		children.remove(component);
		
	}
	/*Element* get(int id)override {
		return this->children;
	}*/
	Section(){}
	Section(std::string title) { this->title = title; }
private:
	std::string title;
	std::list<Element*> children;
};


#endif // !SECTION_H


