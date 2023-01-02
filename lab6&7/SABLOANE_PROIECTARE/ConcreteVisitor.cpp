#include "ConcreteVisitor.h"
#include "Book.h"
#include "Section.h"
#include "TableOfContent.h"
#include "Paragraph.h"
#include "ImageProxi.h"
#include "Image.h"
#include "Table.h"
void ConcreteVisitor::visitBook(const Book* book) const
{
	book->print();
}

void ConcreteVisitor::visitSection(const Section* section) const
{
	section->print();
}

void ConcreteVisitor::visitTableOfContents(const TableOfContent* toc) const
{
	toc->print();
}

void ConcreteVisitor::visitParagraph(const Paragraph* paragraph) const
{
	paragraph->print();
}

void ConcreteVisitor::visitImageProxi(const ImageProxi* ip) const
{
	ip->print();
}

void ConcreteVisitor::visitImage(const Image* image) const
{
	image->print();
}

void ConcreteVisitor::visitTable(const Table* table) const
{
	table->print();
}

void ConcreteVisitor::printStatistics()
{
}
