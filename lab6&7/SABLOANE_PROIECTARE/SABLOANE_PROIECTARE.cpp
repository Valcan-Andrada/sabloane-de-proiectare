#include <chrono>
#include <iostream>
//#include <sys/time.h>
#include <ctime>

using std::cout; using std::endl;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;
#include "ConcreteVisitor.h"
#include "Table.h"
#include <iostream>
#include "ImageProxi.h"
#include "Book.h"
#include "Image.h"
#include "Picture.h"
#include "PictureContent.h"
#include "Section.h"
#include "Paragraph.h"
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <json\value.h>
#include <json\json.h>

int main()
{
    Section* cap1 = new Section("Cap 1");
    Paragraph* p1 = new Paragraph("p1");
    cap1->addElement(p1);
    Paragraph* p2 = new Paragraph("p2");
    cap1->addElement(p2);
    Paragraph* p3 = new Paragraph("p3");
    cap1->addElement(p3);
    Paragraph* p4 = new Paragraph("p4");
    cap1->addElement(p4);
    cap1->addElement(new ImageProxi("ImageOne"));
    cap1->addElement(new Image("imageTwo"));
    cap1->addElement(new Paragraph("some text"));
    cap1->addElement(new Table("table 1"));

    ConcreteVisitor* stats = new ConcreteVisitor();//BookStatistics
    cap1->Accept(stats);
    stats->printStatistics();

    
    return 0;
}