#ifndef PRINTMODE_H
#define PRINTMODE_H
//#include "header.h"
#include <bits/stdc++.h>
using namespace std;

class PrintMode
{
	private:
	/* Single-Responsibility principle violated. The attributes should be manaaged by the
		document class.
	int numberOfPages;
	string orientation;
	double colorIntensity;
	*/
	double costPerPage;

	public:
		PrintMode();
		/* Violates Interface Segregation Principle. So, these methods are passed down to the
			extended classes.
		void saveToner();
		void savePage();
		void Boost();
		*/
		double getCostPerPage();
		void setCostPerPage(double);
};

#endif // PRINTMODE_H
