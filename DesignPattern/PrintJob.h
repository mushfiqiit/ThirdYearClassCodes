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

		void sendToProduction(PrintRequest);
	public:
		PrintJob();
		void addJob(PrintRequest);
		void pullJob(PrintRequest);
};

#endif // PRINTJOB_H
