#include "PageSaveMode.h"

PageSaveMode::PageSaveMode()
{
	//ctor
}

void PageSaveMode::displayPreview(Document recievedDocument)
{
	cout << "Title : ";
	cout << recievedDocument.getDocumentTitle() << "\n";
	cout << recievedDocument.getContent() << "\n";
}

void PageSaveMode::savePage(Document recievedDocument)
{
	cout << "Page saved.\n";
}

void PageSaveMode::renderPreview(Document recievedDocument)
{
	displayPreview(recievedDocument);
}


void PageSaveMode::adjustPageSizeAndOrientation()
{
	cout << "Page size and orientation adjusted. Cost minimized.\n";
}

