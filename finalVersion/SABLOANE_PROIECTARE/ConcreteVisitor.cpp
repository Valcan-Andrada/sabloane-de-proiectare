#include "ConcreteVisitor.h"
#include "Book.h"
#include "Section.h"
#include "TableOfContent.h"
#include "Paragraph.h"
#include "ImageProxi.h"
#include "Image.h"
#include "Table.h"
void ConcreteVisitor::visitBook(const Book* book) 
{
	book->print();
}

void ConcreteVisitor::visitSection(const Section* section) 
{
	sectionNumber += 1;
	
}

void ConcreteVisitor::visitTableOfContents(const TableOfContent* toc) 
{
	tableOfContentNumber += 1;
}

void ConcreteVisitor::visitParagraph(const Paragraph* paragraph) 
{
	paragraphsNumber += 1;
}

void ConcreteVisitor::visitImageProxi(const ImageProxi* ip) 
{
	imagesProxiNUmber += 1;
}

void ConcreteVisitor::visitImage(const Image* image) 
{
	iamgesNumber += 1;
}

void ConcreteVisitor::visitTable(const Table* table) 
{
	tablesNumber = tablesNumber + 1;	
}


void ConcreteVisitor::printStatistics()
{
	std::cout << "Book Statistics:\n";
	std::cout << "*** Number Of Images: " << this->iamgesNumber << std::endl;
	std::cout << "*** Number Of Tables:" << this->tablesNumber << std::endl;
	std::cout << "*** Numver Of Paragraphs:" << this->paragraphsNumber << std::endl;
}

