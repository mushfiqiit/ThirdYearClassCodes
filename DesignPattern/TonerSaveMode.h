#ifndef TONERSAVEMODE_H
#define TONERSAVEMODE_H
//#include "header.h"
#include <bits/stdc++.h>
#include "PrintMode.h"
using namespace std;

class TonerSaveMode: public PrintMode
{
	private:
	string tonerSavingLevel;

		void saveTonerInternal();
		// Open-Closed Principle followed where another algorithm can be added without
		// modifying the existing ones.
		void reduceColorIntensityUsingAlgorithmOne();
		void reduceColorIntensityUsingAlgorithmTwo();
		void reduceColorIntensityUsingAlgorithmThree();
	public:
		TonerSaveMode();
		void setTonerSavingLevel(string);
		string getTonerSavingLevel();
		void saveToner();

};

#endif // TONERSAVEMODE_H
