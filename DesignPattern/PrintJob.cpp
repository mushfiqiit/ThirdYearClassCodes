#include "PrintJob.h"

PrintJob::PrintJob()
{
	//PrintRequest=new queue();
}

void PrintJob::sendToProduction(PrintRequest recievedPrintRequest)
{
	cout << "Print Request implemented.\n";
}

void PrintJob::addJob(PrintRequest recievedPrintRequest)
{
	PrintRequests.push_back(recievedPrintRequest);
	int i=PrintRequests.size()-1;
	while(i>0 && PrintRequests[i].getPriority()>PrintRequests[i-1].getPriority())
	{
		swap(PrintRequests[i], PrintRequests[i-1]);
		i--; if(i==0) break;
	}
}

void PrintJob::pullJob(PrintRequest recievedPrintRequest)
{
	PrintRequest PulledPrintRequest=PrintRequests.front();
	PrintRequests.erase(PrintRequests.begin());
	sendToProduction(PulledPrintRequest);
}
