#pragma once
#include "Visitor.h"
//BookStatistics
class ConcreteVisitor : public Visitor
{
	public:
	void visitBook(const Book* book) const;
	void visitSection(const Section* section) const;
	void visitTableOfContents(const TableOfContent* toc) const ;
	void visitParagraph(const Paragraph* paragraph) const;
	void visitImageProxi(const ImageProxi* ip) const;
	void visitImage(const Image* image) const;
	void visitTable(const Table* table) const;
	void printStatistics();
};

