#include <chrono>
#include <iostream>
//#include <sys/time.h>
#include <ctime>

using std::cout; using std::endl;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;


#include <iostream>
#include "ImageProxi.h"
#include "Book.h"
#include "Image.h"
#include "Picture.h"
#include "PictureContent.h"
#include "Section.h"

int main()
{
   
  
    long start = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    Image* img1 = new Image("Pamela Anderson");
    Image* img2 = new Image("Kim Kardashian");
    Image* img3 = new Image("Kirby Griffin");
    Section* playboyS1 = new Section("Front Cover");
    playboyS1->addElement(img1);
    Section* playboyS2 = new Section("Summer Girls");
    playboyS2->addElement(img2);
    playboyS2->addElement(img3);
    Book* playboy = new Book("Playboy");
    playboy->addContent(playboyS1);
    playboy->addContent(playboyS2);
    long end = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << endl << "time:" << end - start << endl;
    start = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    playboyS1->print();
    end = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    cout << endl << "time:" << end - start << endl;
    start = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    playboyS1->print();
    end = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();

    cout << endl << "time:" << end - start << endl;
    return 0;
}