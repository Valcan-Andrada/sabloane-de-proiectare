#include "Image.h"
#include "Picture.h"
#include "PictureContent.h"
#include <iostream>
#ifndef IMAGE_PROXI_H
#define IMAGE_PROXI_H

class ImageProxi : public Picture, public Element
{public:
	ImageProxi(std::string url);
	ImageProxi() {
		std::cout << "it was called";
		image = new Image();
	}
	std::string type();
	Image* loadImage() {
		if (image == NULL) {
			image = new Image(url);
		}
		return this->image;
	}
	PictureContent* contentul() {
		if (image == NULL) {
			return new PictureContent();
		}
		return this->image->contentul();
	}
	void print()const;
	void Accept(Visitor* visitor) const override;
private:
	Image* image;
	std::string url;
	int dim;
};

#endif