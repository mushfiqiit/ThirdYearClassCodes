#include "PrintRequest.h"

PrintRequest::PrintRequest()
{
	//ctor
}
void PrintRequest::setDocument(Document recievedDocument)
{
	this->referenceDocument=recievedDocument;
}

Document PrintRequest::getDocument()
{
	return referenceDocument;
}

void PrintRequest::setPrintMode(PrintMode recievedPrintMode)
{
	this->referencePrintMode=recievedPrintMode;
}

PrintMode PrintRequest::getPrintMode()
{
	return referencePrintMode;
}

void PrintRequest::setPriority(int recievedPriority)
{
	this->PrioritySettingForRequest.changePriority(recievedPriority);
}

int PrintRequest::getPriority()
{
	return PrioritySettingForRequest.getPriority();
}
