#pragma once
#include <string>
#include "ImageLoader.h"
class ImageLoaderFactory
{
private :
	ImageLoader* iml;
public:
	void create(std::string str) { iml->load(str); }
};

