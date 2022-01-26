#include "PrintJob.h"

PrintJob::PrintJob()
{
	PrintRequests=new priority_queue;
}

void PrintJob::sendToProduction(PrintRequest recievedPrintRequest)
{
	cout << "Print Request implemented.\n";
}

void PrintJob::addJob(PrintRequest recievedPrintRequest)
{
	PrintRequests.push(make_pair(recievedPrintRequest.getPriority(),  recievedPrintRequest));
}

void PrintJob::pullJob(PrintRequest recievedPrintRequest)
{
	PrintRequest PulledPrintRequest=PrintRequests.top();
	PrintRequests.pop();
	sendToProduction(PulledPrintRequest);
}
