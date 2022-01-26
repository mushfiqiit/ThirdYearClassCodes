#ifndef BOOSTERMODE_H
#define BOOSTERMODE_H
#include "header.h"
#include <bits/stdc++.h>
using namespace std;

class BoosterMode :public PrintMode
{
	private:
	double intensityThreshold;
		Document increaseColorIntensity(Document);
	public:
		BoosterMode();
		Document Boost(Document);
		void setIntensityThreshold(double);
		double getIntensityThreshold();

};

#endif // BOOSTERMODE_H
