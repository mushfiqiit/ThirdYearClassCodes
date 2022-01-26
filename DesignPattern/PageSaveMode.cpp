#include "PageSaveMode.h"

PageSaveMode::PageSaveMode()
{
	//ctor
}

void PageSaveMode::adjustPageSizeAndOrientation()
{

}

void PageSaveMode::displayPreview(Document recievedDocument)
{
	cout << "Title : ";
	cout << recievedDocument.getDocumentTitle() << "\n";
	cout << recievedDocument.getContent() << "\n";
}

void PageSaveMode::savePage(Document recievedDocument)
{

}

void PageSaveMode::renderPreview(Document recievedDocument)
{
	displayPreview(recievedDocument);
}
