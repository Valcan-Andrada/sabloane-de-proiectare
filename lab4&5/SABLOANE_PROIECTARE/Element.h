#ifndef ELEMENT_H
#define ELEMENT_H
class Element
{
public:
    virtual void print() = 0;
    virtual void addElement(Element*) {}
    virtual void remove(Element*){}
    virtual Element* get(int id) { return this; }
};

#endif