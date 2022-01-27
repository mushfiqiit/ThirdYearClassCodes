#ifndef PRINTJOB_H
#define PRINTJOB_H
#include <bits/stdc++.h>
//#include "header.h"
#include "PrintJob.h"
#include "PrintRequest.h"
using namespace std;

class PrintJob
{
	private:
	queue<PrintRequest> PrintRequests;
	/* PrioritySetting class is needed to order the PrintRequest so, the class sent to PrintRequest
	PrioritySetting PrioritySetter;
	*/
		void sendToProduction(PrintRequest);
	public:
		PrintJob();
		void addJob(PrintRequest);
		void pullJob(PrintRequest);
		/* Single-Responsibility Principle violated. ChangePriority function passed to PrioritySetting Class 
		void changePriority();
		*/
};

#endif // PRINTJOB_H
