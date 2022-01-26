#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<bits/stdc++.h>
using namespace std;


class Document
{
	private:
	int numberOfPages;
	double colorIntensity;
	string orientation;
	string documentTitle;
	string content;

	public:
		Document();
		void setContent(string);
		string getContent();
		void setNumberOfPages(int);
		int getNumberOfPages();
		void setColorIntensity(double);
		double getColorIntensity();
		void setOrientation(string);
		string getOrientation();
		void setDocumentTitle(string);
		string getDocumentTitle();

};

#endif // DOCUMENT_H
