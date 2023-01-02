#ifndef ELEMENT_H
#define ELEMENT_H
#include "Visitor.h"
class Element
{
public:
    virtual void print() const = 0;
    virtual void addElement(Element*) {}
    virtual void remove(Element*){}
    virtual Element* get(int id) { return this; }
    virtual void Accept(Visitor* visitor) const = 0;
};

#endif