#include "Element.h"
#include "Picture.h"
#include <string>
#include <iostream>
#include "PictureContent.h"
#include "Picture.h"
#include "Element.h"
#include <thread>
#include "ImageLoaderFactory.h"

using namespace std;

#ifndef IMAGE_H
#define IMAGE_H

class Image: public Picture, public Element
{
private:

	PictureContent* content;
	std::string url;
	ImageLoaderFactory* imageLoaderFactory;

public:
	std::string type();
	PictureContent* contentul();
	Image(std::string url) { 
		this_thread::sleep_for(chrono::milliseconds(100));
		this->url = url;
	}
	Image();
	void print() const;
	void Accept(Visitor* visitor) const override;
};

#endif