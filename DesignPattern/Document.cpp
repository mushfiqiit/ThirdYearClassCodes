#include "Document.h"

Document::Document()
{
	//ctor
}
void Document::setContent(string recievedContent)
{
	this->content=recievedContent;
}
string Document::getContent()
{
	return content;
}
void Document::setNumberOfPages(int recievedNumberOfPages)
{
	this->numberOfPages=recievedNumberOfPages;
}

int Document::getNumberOfPages()
{
	return numberOfPages;
}

void Document::setColorIntensity(double recievedColorIntensity)
{
	this->colorIntensity=recievedColorIntensity;
}


double Document::getColorIntensity()
{
	return colorIntensity;
}

void Document::setOrientation(string recievedOrientation)
{
	this->orientation=recievedOrientation;
}

string Document::getOrientation()
{
	return orientation;
}

void Document::setDocumentTitle(string recievedDocumentTitle)
{
	this->documentTitle=recievedDocumentTitle;
}

string Document::getDocumentTitle()
{
	return documentTitle;
}
