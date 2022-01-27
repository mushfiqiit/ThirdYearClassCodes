#ifndef PRINTREQUEST_H
#define PRINTREQUEST_H
#include <bits/stdc++.h>
#include "PrioritySetting.h"
#include "Document.h"
#include "PrintMode.h"
//#include "header.h"
using namespace std;

class PrintRequest
{
	private:
	Document referenceDocument;
	PrintMode referencePrintMode;
	/*
	Liskov Substitution Principle followed. PrintMode is substitutable by it's extended classes.
	*/
	PrioritySetting PrioritySettingForRequest;
	public:
		PrintRequest();
		void setDocument(Document);
		Document getDocument();
		void setPrintMode(PrintMode);
		PrintMode getPrintMode();
		void setPriority(int);
		int getPriority();
};

#endif // PRINTREQUEST_H
