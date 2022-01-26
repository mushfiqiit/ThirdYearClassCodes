#ifndef PRIORITYSETTING_H
#define PRIORITYSETTING_H
#include "header.h"
#include <bits/stdc++.h>
using namespace std;

class PrioritySetting
{
	private:
	int priority;
	public:
		PrioritySetting();
		void changePriority(int);
		int getPriority();
};

#endif // PRIORITYSETTING_H
