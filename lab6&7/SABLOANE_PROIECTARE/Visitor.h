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
	virtual void visitBook(const Book* book) const = 0;
	virtual void visitSection(const Section* section) const = 0;
	virtual void visitTableOfContents(const TableOfContent* toc) const = 0;
	virtual void visitParagraph(const Paragraph* paragraph) const = 0;
	virtual void visitImageProxi(const ImageProxi* ip)const = 0;
	virtual void visitImage(const Image* image) const = 0;
	virtual void visitTable(const Table* table) const = 0;
};

