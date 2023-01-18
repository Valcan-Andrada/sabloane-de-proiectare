#include "ImageProxi.h"
#include <iostream>
#include "Visitor.h"

ImageProxi::ImageProxi(std::string url)
{
	this->url = url;
}

std::string ImageProxi::type()
{
	return "ImageProxi";
}

void ImageProxi::print() const
{
	std::cout << "this is an image proxi";
}

void ImageProxi::Accept(Visitor* visitor) const
{
	visitor->visitImageProxi(this);
}
