#include <string>
#include "PictureContent.h"
#ifndef PICTURE_H
#define PICTURE_H
class Picture
{
public:
    virtual  PictureContent* contentul()=0;
    virtual std::string url() { return "img url"; };
    virtual int dim() { return 0; };
};


#endif