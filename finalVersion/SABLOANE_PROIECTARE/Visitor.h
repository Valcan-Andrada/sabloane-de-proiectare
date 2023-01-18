#pragma once
class Book;
class Section;
class TableOfContent;
class Paragraph;
class ImageProxi;
class Image;
class Table;
class Visitor
{
public:
	virtual void visitBook(const Book* book)  = 0;
	virtual void visitSection(const Section* section)  = 0;
	virtual void visitTableOfContents(const TableOfContent* toc) = 0;
	virtual void visitParagraph(const Paragraph* paragraph) = 0;
	virtual void visitImageProxi(const ImageProxi* ip) = 0;
	virtual void visitImage(const Image* image) = 0;
	virtual void visitTable(const Table* table) = 0;
};

