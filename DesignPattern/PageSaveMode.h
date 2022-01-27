#ifndef PAGESAVEMODE_H
#define PAGESAVEMODE_H
//#include "header.h"
#include <bits/stdc++.h>
#include "Document.h"
#include "PrintMode.h"
using namespace std;

class PageSaveMode: public PrintMode
{
	private:
		void displayPreview(Document);
	public:
		PageSaveMode();
		void savePage(Document);
		void renderPreview(Document);
		void adjustPageSizeAndOrientation();
};

#endif // PAGESAVEMODE_H
