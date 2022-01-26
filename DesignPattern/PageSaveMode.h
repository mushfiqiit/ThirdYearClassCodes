#ifndef PAGESAVEMODE_H
#define PAGESAVEMODE_H
#include "PrintMode.h"
#include <bits/stdc++.h>
using namespace std;

class PageSaveMode
{
	private:
		void adjustPageSizeAndOrientation();
	public:
		PageSaveMode();
		void savePage();
		void renderPreview();
};

#endif // PAGESAVEMODE_H
