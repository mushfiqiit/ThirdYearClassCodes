#ifndef PRINTMODE_H
#define PRINTMODE_H
#include <bits/stdc++.h>
using namespace std;

class PrintMode
{
	// Attributes
	int numberOfPages;
	int orientation;
	int colorIntensity;
	int costPerPage;
	public:
		PrintMode();
		void saveToner();
		void savePage();
		void Boost();
};

#endif // PRINTMODE_H
