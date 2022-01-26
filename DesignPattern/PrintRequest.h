#ifndef PRINTREQUEST_H
#define PRINTREQUEST_H
#include "header.h"
#include <bits/stdc++.h>
using namespace std;

class PrintRequest
{
	private:
	Document referenceDocument;
	PrintMode referencePrintMode;
	PrioritySetting PrioritySettingForRequest;
	public:
		PrintRequest();
		void setDocument(Document);
		Document getDocument();
		void setPrintMode(PrintMode);
		PrintMode getPrintMode();
		void setPriority();
		int getPriority();
};

#endif // PRINTREQUEST_H
