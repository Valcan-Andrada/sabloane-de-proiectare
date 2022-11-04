
#include "Element.h"
#include <string>
class Image : public Element
{
protected:
	string url;
public:
	void add(Element* element) override {}
	void remove(Element* element){}
	Element* get(int index) { return NULL; }
	Image(string url);
};

