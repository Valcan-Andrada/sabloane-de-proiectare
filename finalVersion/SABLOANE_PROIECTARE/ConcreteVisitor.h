#pragma once
#include "Visitor.h"
//BookStatistics
class ConcreteVisitor : public Visitor
{
private:
	int iamgesNumber = 0;
	int tablesNumber = 0;
	int paragraphsNumber = 0;
	int sectionNumber = 0;
	int tableOfContentNumber = 0;
	int imagesProxiNUmber = 0;
public:

	void visitBook(const Book* book);
	void visitSection(const Section* section);
	void visitTableOfContents(const TableOfContent* toc);
	void visitParagraph(const Paragraph* paragraph);
	void visitImageProxi(const ImageProxi* ip);
	void visitImage(const Image* image) ;
	void visitTable(const Table* table) ;
	void printStatistics();
};

