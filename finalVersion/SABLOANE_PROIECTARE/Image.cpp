#include "Image.h"
#include <iostream>
#include "Visitor.h"

std::string Image::type()
{
	return "Image";
}

PictureContent* Image::contentul()
{
	return this->content;
}

Image::Image()
{
}

void Image::print() const
{
	std::cout << "this is an image";
}

void Image::Accept(Visitor* visitor) const
{
	visitor->visitImage(this);
}
